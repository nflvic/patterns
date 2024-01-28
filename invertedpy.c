#include <stdio.h>

int main() {
    int rows = 20;

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < i; j++) {
            printf("  ");
        }

        for(int j = i; j < rows; j++) {
            printf("%-4d", j);
        }

        printf("\n");
    }
}