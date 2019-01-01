//Kristi Adams
//Module 4
//Section A, Problem 1

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int sum=0;                                       //declare variables
   int i, j, matrix[5][5] = {
        {2, 3, 4, 2, 2},                            //table data
        {2, 3, 3, 2, 2},
        {2, 3, 5, 1, 4},
        {4, 3, 3, 1, 5},
        {2, 3, 4, 5, 6}};

    for(i=0; i<5; i++){                             //print table
        for(j=0; j<5; j++){
            printf("\t%d", matrix[i][j]);
        }

        printf("\n\n");
    }
    for(i=0; i<5; i++){                             //calculate row totals
        for(j=0; j<5; j++){
            sum=sum+matrix[i][j];
        }
        printf("Sum of Row %d is %d", i+1, sum);    //print each row total
        sum=0;
        printf("\n");
    }
    {
        printf("\n");
    }
    for(i=0; i<5; i++){                             //calculate column total
        for(j=0; j<5; j++){
            sum=sum+matrix[j][i];
        }
        printf("Sum of Column %d is %d", i+1, sum); //print each column total
        sum=0;
        printf("\n");
    }

    return 0;
}
