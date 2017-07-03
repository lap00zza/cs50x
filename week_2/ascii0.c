#include <stdio.h>

int main(void) {
    for (int i = 65; i < 65 + 26; i++) {
        
        // (char) i is explicitly casting integer 
        // i to a character.
        // printf("%c is %d\n", (char) i, i);
        
        // c is smart so it can implictly cast 
        // as well.
        printf("%c is %d\n", i, i);
    }
}
