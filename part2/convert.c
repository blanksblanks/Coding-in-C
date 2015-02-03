#include <stdio.h>

int main(){
    int x;
    scanf("%d", &x);
    printf("signed dec:\t%d\n", x);
    printf("unsigned dec:\t%u\n", x);
    printf("hex:\t\t%x\n", x);
    printf("binary:\t\t");

    int i;
    // traverse all the bits in the int
    // sizeof gives # of bytes of storage
    for (i = sizeof(int) * 8 - 1; i >= 0; i--) {
        // check if x has bit[i] set to 1
        (x & (1 << i) ) ? printf("1") : printf("0");
        if (i % 4 == 0)
            printf(" "); // add space every 4 digits
    }
    printf("\n");

    return 0;
}
