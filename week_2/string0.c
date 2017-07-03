#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    string s = get_string();
    if (s != NULL) {
        for (int i = 0; i < strlen(s); i++){
            printf("Hello, %c\n", s[i]);
        }
    }
}
