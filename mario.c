#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height = 0;
    do{
        height = get_int("Height: ");
    }
    while(height < 1 || height > 8);

    // keep track of rows
    for(int i = 0; i < height; i++){
        // num of spaces to print
        for(int j = (height-i-1); j > 0; j--){
            printf(" ");
        }
        // left hashes
        for(int j = 0; j <= i; j++){
            printf("#");
        }
        printf("  ");
        // right hashes
        for(int j = 0; j <= i; j++){
            printf("#");
        }
        printf("\n");
    }
}