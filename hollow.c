#include <stdio.h>

int main() {
    int rows = 10;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < rows; j++) {
            
            if(i > 0 && j > 0 && j < rows-1 && i < rows - 1) {
                printf("  ");
            } else {
                printf("%d", rows);
            }

        }

        printf("\n");
    }
}