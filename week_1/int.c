#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x: ");
    int x = get_int();
    
    printf("y: ");
    int y = get_int();
    
    printf("%d + %d is %d\n",  x, y, x + y);
}