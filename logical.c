#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char();
    // in c, chars use single quotes and 
    // strings use double quotes.
    if (c == 'y' || c == 'Y') {
        printf("yes\n");
    } else if (c == 'n' || c == 'N') {
        printf("no\n");
    } else {
        printf("error\n");
    }
}
