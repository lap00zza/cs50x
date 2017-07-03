#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    // ask user for input
    string s = get_string();
    
    // make sure get_string() returned
    // a string.
    if (s != NULL) {
        
        // Iterate over the characters in s, one 
        // character at a time
        for (int i = 0, n = strlen(s); i < n; i++){
            printf("Hello, %c\n", s[i]);
        }
    }
}
