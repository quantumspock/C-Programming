#include <stdio.h>

int main ()
{
void simple_printf(int *);  //prototype with a pointer parameter

  int *pNum1;               //declare pointer to an int
  int *pNum2;               //declare pointer to an int
  int hours;                //declare an integer variable
  int min;                  //declare an integer variable

  hours = 2;                //store the number 2 into hours
  min = 10;                 //store the number 10 into min

  pNum1 = &min;             //Store the 'address of min' in pNum1
  printf("The address stored in pNum1 is %u\n",pNum1);
  printf("The value pointed to by pNum1 is %d\n\n",*pNum1);

  pNum2 = &hours;           //Store the 'address of hours' in pNum2
  printf("The address stored in pNum2 is %u\n",pNum2);
  printf("The value pointed to by pNum2 is %d\n\n", *pNum2);

  *pNum1 = 38;              //Set value pointed to by pNum1 to 38
  *pNum2 = 4;               //Set value pointed to by pNum2 to 4
  printf("The value in min is now %d\n", min);
  printf("The value in hours is now %d\n", hours);

    return 0;
}
