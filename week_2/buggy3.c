#include <stdio.h>
#include <cs50.h>

// prototype
int get_negative_int(void);

int main(void) {
    int i = get_negative_int();
    printf("%d is a negative number\n", i);
}

int get_negative_int(void) {
    int n;
    
    // 0 was being accepted as a negative integer
    // which is wrong. That was because after we
    // enter the while condition checks if 0 > 0,
    // which is false and thus breaks out of the
    // loop return 0. To fix this we will use 
    // n >= 0
    do {
        printf("n is: ");
        n = get_int();
    } while (n >= 0);
    return n;
}
