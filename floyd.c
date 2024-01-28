#include <stdio.h>

int main (){
    int rows = 10;

    int n = 0;

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < i; j++){
            printf("%-2d ", n++);
        }

        printf("\n");
    }
}