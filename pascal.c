#include <stdio.h>


int main() {

    int rows = 10;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < rows - i; j++){
            printf("   ");
        }

        int c = 1;

        for(int j = 1; j <= i; j++) {
            printf("%-6d", c);

            c = c * (i - j)/j;
        }

        printf("\n");
    }
}