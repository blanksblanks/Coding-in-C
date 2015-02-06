#include "gcd.h"

// use gcd to see if two numbers are relatively prime
int gcd(int a, int b) {
    if (a == 0 || b == 0)
        return 0;
    if (a == b)
        return 0;
    while (a != b) {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }
    // a is the gcd
    if (a == 1)
        return 1;
    else
        return 0;
}
