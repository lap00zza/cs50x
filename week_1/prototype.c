#include <cs50.h>
#include <stdio.h>

// [2] if we add this then we can get past that limitation.
// This is called the function prototype.
void print_name(string name);

int main(void) 
{
    string s =  get_string();
    print_name(s);
}

// C is dumb. So if we don't put this function before 
// calling it, as in above the main block, we will get
// an error. Check [2]
// This is known as function definition.
void print_name(string name)
{
    printf("Hello, %s\n", name);
}
