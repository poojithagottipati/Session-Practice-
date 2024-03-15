#include <stdio.h>

#define bit_check(num) ((num >> 8) & 1)
//#define power_of_2_check(num) ((num & (num - 1)) == 0) {it can be defined or directly used in code}

enum {
    bit_set = 1,
    bit_not_set
};

int main() {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);

    int ninthBit = bit_check(num);
    int result;

    switch (ninthBit) {
        case bit_set:
            printf("Ninth bit is set.\n");
            int a, b, c;
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            c = a + b;
            printf("After addition: %d\n", c);
            break;
        
        case bit_not_set:
            printf("Ninth bit is not set.\n");
            if ((num & (num - 1)) == 0)
                printf("given number is a power of 2.\n");
            else
                printf("given number is not a power of 2.\n");
            break;
        
        default:
            printf("Invalid input.\n");
    }
    return 0;
}
/*
Enter an integer: 256
Ninth bit is set.
Enter two numbers: 2 4
After addition: 6
*/
