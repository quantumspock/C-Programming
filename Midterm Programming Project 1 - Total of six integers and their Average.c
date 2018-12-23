//Kristi Adams
//COS 116
//Midterm Problem 1
//Calculate Total of 6 integers and their Average

#include <stdio.h>

int main()

{

    int num, i, total = 0;                      //declare variables
    float average = 0.0;

    for(i = 0; i < 6; i++)                      //run request six times

{

    printf("Enter an integer and hit enter: "); //ask user for input
    scanf("%d", &num);                          //get value of num six times
    total += num;                               //total each time
}

    average = total/6.0;                        //calculate average of sum of six integers
    printf("\nThe total is %d\n\n", total);     //print total
    printf("The average is %f\n\n", average);   //print float average value

return 0;

}
