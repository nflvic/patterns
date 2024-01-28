#include <stdio.h>

int main() {
    int rows = 5;
    int cols = 5 * 2;

    for(int i = 0; i < rows; i++) {
        for(int j = i; j < cols; j++) {
            printf("%d", j + i);
        }

        for(int j = 0; j < i; j++) {
            printf("*");
        }

        printf("\n");
    }
}