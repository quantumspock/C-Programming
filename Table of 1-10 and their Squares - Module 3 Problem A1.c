//Kristi Adams
//Module Three
//Problem A1

#include <stdio.h>

int main()
{
  #define TABLESIZE 10              //set table size
  int n;

  printf("NUMBER  SQUARE\n");       //table headings
  printf("______  ______\n\n");     //underline for headings
  n=1;
  while (n <= TABLESIZE)
  {
      printf("%3d %7d\n", n, n*n);  //calculate to square

      n++;                          //add one to n
  }


  }



