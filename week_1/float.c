#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("x: ");
    float x = get_float();
    
    printf("y: ");
    float y = get_float();
    
    printf("%f + %f is %f\n",  x, y, x + y);
    printf("%f - %f is %f\n",  x, y, x - y);
    printf("%f * %f is %f\n",  x, y, x * y);
    printf("%f / %f is %f\n",  x, y, x / y);
}