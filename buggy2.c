#include <stdio.h>
#include <cs50.h>

int main(void) {
    int i = 0;
    while (i <= 10) {
        printf("#\n");
        i++;
        eprintf("i is now: %d\n", i);
    }
}