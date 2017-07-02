#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x: ");
    int x = get_int();
    
    printf("y: ");
    int y = get_int();
    
    printf("%d + %d is %d\n",  x, y, x + y);
    printf("%d - %d is %d\n",  x, y, x - y);
    printf("%d * %d is %d\n",  x, y, x * y);
    printf("%d / %d is %d\n",  x, y, x / y);
    // % operator means modulo. Ex: 12 % 10 is 2
    printf("Remainder of %d / %d is %d\n",  x, y, x % y);
}