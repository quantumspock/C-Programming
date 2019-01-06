//Kristi Adams
//Module 5
//Section A2

#include <stdio.h>
#include <string.h>

int main()
{

  char a[10], b[10], c[10];             //declare input variables
  char combine[35];                     //declare variable for string concatenation

  puts("Enter a two digit decimal number:");      //input for float
  gets(a);                              //stores input a

  puts("\nEnter a single integer: ");         //input for integer
  gets(b);                              //stores input b

  puts("\nEnter a character: ");        //input for character
  gets(c);                              //stores input c

  strcat(combine, a);                   //append
  strcat(combine, b);                   //"
  strcat(combine, c);                   //"

  printf("\n\nThe strings put together look like this:\n");     //print message
  puts(combine);                                                //concatenation of a, b, and c variables into variable combine

  return 0;

}
