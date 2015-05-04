#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

struct MdbRec {
    char name[16];
    char  msg[24];
};

void f(FILE *fp, struct MdbRec *rec, char **p)
{
    if (*p) {
        assert(strlen(*p) < 16); strcpy(rec->name, *p++);
        assert(strlen(*p) < 24); strcpy(rec->msg,  *p++);
        fwrite(rec, sizeof(struct MdbRec), 1, fp);
        f(fp, rec, p);
    }
}

int main(int argc, char **argv)
{
    int    i = 0;
    char   x = 0;
    FILE *fp = NULL;
    struct MdbRec r;

    if (argc == 1) {  // no command line argument
    
        fp = fopen("mdb", "rb");  // open for reading, in binary mode

        while (fread(&r, sizeof(r), 1, fp) == 1)
            printf("{%s}{%s}\n", r.name, r.msg);
    
    } else if (argc == 2 && strcmp(argv[1], "-x") == 0) { // "-x" is passed

        scanf("%d", &i);
        fp = fopen("mdb", "r+b");  // open for both reading & writing

        fseek(fp, i * sizeof(r), SEEK_SET);
        fwrite(&x, 1, 1, fp);
        fseek(fp, i * sizeof(r) + (r.msg - r.name), SEEK_SET);
        fwrite(&x, 1, 1, fp);

    } else if (argc >= 3 && argc % 2) { // 2,4,6,... command line args

        fp = fopen("mdb", "ab"); // "a" for append; creates mdb if not there

        f(fp, &r, argv + 1); // recall that argv[0] is the program name

    } else exit(1);

    fclose(fp);
    return 0;
}

