#include <stdio.h>

int main () {
    int rows = 10;

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < i; j++) {
            printf(" ");
        }

        for(int j = 0; j < rows; j++) {
            printf("* ");
        }

        printf("\n");
    }
}