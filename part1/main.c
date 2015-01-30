#include <stdio.h>

// error if main calls this method above its declaration
// note: previous implicit declaration of ‘average’ was here
double average(int a, int b){
    return (a + b) / 2.0;
}

int main (int argc, char **argv){
    int x, y;
    printf("Feed me 2 positive integers, please:\n");
    scanf("%d%d", &x, &y);
    printf("You typed in %d and %d\n", x, y);

    // calculate average
    double avg = average(x, y);
    printf("The average of %d and %d is: %f\n", x, y, avg);
}

