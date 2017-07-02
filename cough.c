// Compiling is an umbrella term for the following:
// 1. Preprocessing
// 2. Compiling (C to assembly code)
// 3. Assembling (Assembly to machine code, ie: 0's and 1's)
// 4. Linking (mix the machine codes for all the other files)
// 
// #include is a preprocessor directive. It means do 
// something with this before you run my code.
#include <cs50.h>
#include <stdio.h>

void cough(int n);
void sneeze(int n);
void say(string s, int n) ;

int main(void) 
{
    cough(2);
    sneeze(2);
}

void cough(int n)
{
    say("cough", n);
}

void sneeze(int n)
{
    say("achoo", n);
}

// If a function does not take any arguments, we must
// specify void in the function definition and prototype
void say(string s, int n) 
{
    for (int i = 0; i < n; i++) 
    {
        printf("%s\n", s);
    }
}