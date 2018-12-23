//Kristi Adams
//COS 116
//Midterm Problem 3
//Function Picnic

#include <stdio.h>

void picnic(float, int*, int*, int*, int*);                   //prototype of function picnic()
int main()
{
    int hotdogs = 0, hamburgers = 0, salads = 0, pickles = 0; //declarations
    float x = 0.0;

printf("Enter the total amount of money: $");               //Allow user input for money value
    scanf("%f", &x );

  picnic(x, &hotdogs, &hamburgers, &salads, &pickles);      //Calls function

printf("\nI can bring this many - hotdogs: %d", hotdogs);   //Prints results from function picnic
printf("\nI can bring this many - hamburgers: %d", hamburgers);
printf("\nI can bring this many - salads: %d", salads);
printf("\nI can bring this many - pickles: %d", pickles);

return 0;

}
void picnic(float x, int *hotdogs, int *hamburgers, int *salads, int *pickles)
{
    *hotdogs = x/1.00;
    *hamburgers = ((x - *hotdogs*1.00)/0.50);
    *salads = ((x - *hotdogs*1.00 - *hamburgers*0.50)/0.25);
    *pickles = ((x - *hotdogs*1.00 - *hamburgers*0.50 - *salads*0.25)/0.01);

return;

}

