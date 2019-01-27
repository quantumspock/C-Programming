//Kristi Adams
//Final #1

#include <stdio.h>

int main()

{
    int matrix[2][3];                                              //set size of array
    int a, b, min, row, col;                                       //variable names

    printf("Please enter six different array elements: \n");      //user input

    for(a=0; a<2; a++){                                           //set loops
        for(b=0; b<3; b++){

    scanf("%d", &matrix[a][b]);                                   //pass value

    }
    }
    min = matrix[0][0];
    for(a=0; a<2; a++){
        for(b=0; b<2; b++){

            if(min > matrix[a][b]){
                min=matrix[a][b];
                row=a;
                col=b;
                }
            }
        }

     printf("The smallest value is %d and is found at Row %d and Column %d \n", min, row, col);  //prints smallest value and location

     return 0;

    }
