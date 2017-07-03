#include <stdio.h>

int main(void) {
    // difference between A and a is 32
    for (char c = 'A'; c <= 'Z'; c++) {
        printf("%c is %d\n", c, c);
    }
}
