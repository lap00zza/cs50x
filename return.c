#include <cs50.h>
#include <stdio.h>

// Function prototype
int square(int n);

int main(void) 
{
    printf("x is: ");
    int i = get_int();
    printf("x^2 is: %d\n", square(i));
}

// Function definition
// Since this function is returning an int, we
// we state its return type.
int square(int n)
{
    return n * n;
}
