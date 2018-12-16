//Kristi Adams
//Module Three
//Problem B2

#include <stdio.h>
void liquid(int, int*, int*, int*, int*);              //prototype of function liquid()
int main()
{
  int gallon = 0, quart = 0, pint = 0, cup = 0;       //declarations
    int x;

printf("Enter the number of cups: ");                  //Allow user input for number of cups
    scanf("%d", &x );

  liquid(x, &gallon, &quart, &pint, &cup);             //Calls function

printf("\nThe number of gallons is: %d", gallon);      //Prints results from function liquid
printf("\nThe number of quarts is: %d", quart);
printf("\nThe number of pints is: %d", pint);
printf("\nThe number of cups is: %d", cup);

return 0;

}
void liquid(int x, int *gallon, int *quart, int *pint, int *cup)
{
    *gallon = x/16;
    *quart = ((x - *gallon*16)/4);
    *pint = ((x - *gallon*16 - *quart*4)/2);
    *cup = (x - *gallon*16 - *quart*4 - *pint*2);

return;
}
