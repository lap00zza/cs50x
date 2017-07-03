#include <stdio.h>
#include <cs50.h>

int main(void) {
    string s = get_string();
    int n = 0;
    // '\0' means 8 0's 00000000. Its a way
    // by which c nul terminates a string.
    while (s[n] != '\0') {
        n++;
    }
    printf("%d\n", n);
}