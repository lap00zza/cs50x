#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int i = get_int();
    if (i < 0) {
        printf("Negative\n");
    } else if (i > 0) {
        printf("Positive\n");
    } else {
        printf("Zero\n");
    }
}
