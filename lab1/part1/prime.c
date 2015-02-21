#include "prime.h"

int prime(int num) {
    int i;
    if (num < 4 && num > 1) //  2, 3 are prime (NOT 0, 1)
        return 1;
    else if (num % 2 == 0 || num % 3 == 0) // easiest test
        return 0;
    else {
        for (i = 5; i*i <= num; i += 2) { // test all odds from 5 up
            if (num % i == 0)
                return 0;
            else
                return 1;
        }
    }
    return 1;
}
