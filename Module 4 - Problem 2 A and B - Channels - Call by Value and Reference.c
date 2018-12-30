//Kristi Adams
//C Programming
//Module 4 - Section B1 A & B

#include <stdio.h>
#include <stdlib.h>

#define NUMS 7

void display(int[NUMS]);                                //declare function
int main()

{
int channels[NUMS] = {2,4,5,7,9,11,13};                 //declare array data
display(channels);
return 0;
}

void display(int channels[NUMS])

{
int i;
for (i=0; i<NUMS; i++)
printf("Data Element %d is %d\n", i, *(channels + i));  //Call function by value

printf("\n\nChange to Output for Problem B1 - b\n\n");
for (i=0; i<NUMS; i++,channels++)
printf("Data Element %d is %d\n",i,*channels);          //Call function by reference

}
