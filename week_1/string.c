#include <cs50.h> // this is what enables use to use 'string' type
#include <stdio.h>

int main(void) 
{
    printf("Name: ");
    string name = get_string();
    printf("Hello, %s\n", name);
}
