#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int i = get_int();
    printf("Bottles: %d\n", 12 * i);
}
