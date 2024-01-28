#include <stdio.h>
#include <math.h>

int main () {
    int num = 5;
    int rows = num * 2 - 1;

    int frame = 1;

    int y = 0;
    int x = num;

    int yaxis = 1;

    int h = num - 1;

    for(int i = 0; i < rows; i++) {

        for(int j = 0; j < rows; j++) {

            if(i >= frame && j >= frame && j < rows - frame  && i < rows - (frame)){
                int k = x;
                if(k < 0) k = -k;

                if(j > yaxis && j < rows - yaxis - 1){
                    printf("%d ", k);
                } else {
                    printf("%d ", h);
                }


            } else {
                printf("%d ", num );
            }

        }

        //h--;

        printf("\n");

                if(y < num-1) {
                    x--;
                } else {
                    x++;
                }

        //frame++;
        yaxis++;
        y++;
    }
}