#include <stdio.h>

void print(int rows) {
        for(int i = 0; i < rows; i++) {

        for (size_t j = 0; j < i; j++) {

            if(j > 0 && i > 0 && j < i-1 && i < rows - 1){
                printf(" ");
            } else {
                printf("*");
            }
        }

        printf("\n");
    }
}

int main () {
    
    for(int i = 0; i < 20; i++) {
        print(i);
        printf("\n");
    }

}