#include <stdio.h>
#include "my_mat.h"
#include "my_mat.c"


int main() {
    char letter; 
    int mat[10][10];
    
    printf("Enter a letter: ");
    
    scanf(" %c", &letter); 

    while (letter != 'D' && letter != EOF) {
        if (letter == 'A') {
            getMatrix(mat);
        } else if (letter == 'B') {
            isPath(mat);
        } else if (letter == 'C') {
            shortestPath(mat);
        } else {
            printf("Invalid input. Please enter A, B, C, or D.\n");
        }

        printf("Enter a letter: ");
        scanf(" %c", &letter); // Correctly read the next character
    }

    return 0;
}
   