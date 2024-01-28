#include <stdio.h>
#include <unistd.h>

int main() {
    int rows = 20;

    for(int i = 0; i < rows; i++) {
        for(int j = i; j < rows; j++) {
            printf(" ");
            //sleep(1);
        }

        for(int j = 0; j < i; j++) {
            printf("* ");
            //sleep(1);
        }

        printf("\n");
    }

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < i; j++) {
            printf(" ");
            //sleep(1);
        }

        for(int j = i; j < rows; j++) {
            printf("* ");
            //sleep(i);
        }
        printf("\n");
    }
}