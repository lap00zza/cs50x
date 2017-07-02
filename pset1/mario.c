#include <cs50.h>
#include <stdio.h>

void drawLine(int line, int height);
int getHeight();

int main(void) {
    int height = getHeight();
    
    // If height is 0, this wont run.
    for (int i = 1; i <= height; i++) {
        drawLine(i, height);
        // A new line to start our next line.
        printf("\n");
    }
}

// draw outputs a line depending on the 
// line number and the height.
void drawLine(int lineNum, int height) {
    // Left padding. Padding is height - line number, 
    // since we have to fit the hash as well. So, for
    // example: line 3 with height 5 -> padding is 2.
    for (int j = 1; j <= height - lineNum; j++) {
        printf("%c", ' ');
    }
    
    // hash is dependent on the line number. So,
    // line 3 means 3 hashes and so on.
    for (int k = 1; k <= lineNum; k++) {
        printf("%c", '#');
    }
    
    // Then we add 2 units of space. 
    printf("  ");
    
    // Now we mirror the hash without the 
    // padding.
    for (int l = 1; l <= lineNum; l++) {
        printf("%c", '#');
    }
}

// getHeight checks the input value and only
// accepts if input is a positive integer no
// greater than 23.
int getHeight() {
    while (true) {
        printf("Height: ");
        int i = get_int();
        if (i >= 0 && i <= 23) {
            return i;
        }
    }
}
