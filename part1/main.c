#include <stdio.h>
#include "prime.h"
#include "gcd.h"

// error if main calls this method above its declaration
// i.e. note: previous implicit declaration of ‘average’ was here
double average(int a, int b){
    return (a + b) / 2.0;
}

int main (int argc, char **argv){
    // read in 2 integers from user
    int x, y;
    printf("Two positive integers, please:  ");
    scanf("%d%d", &x, &y);
    printf("You typed in %d and %d.\n", x, y);

    // return average
    double avg = average(x, y);
    printf("The average is: %f.\n", avg);

    // check whether each number is prime
    printf("%d is ", x);
    if (prime(x) != 1)
        printf("not ");
    printf("prime.\n%d is ", y);
    if (prime(y) != 1)
        printf("not ");
    printf("prime.\n");

    // check whether two numbers are relatively prime
    if (gcd(x, y) == 1)
        printf("They are relatively prime.\n");
    else
        printf("They are not relatively prime.\n");

    return 0;
}

