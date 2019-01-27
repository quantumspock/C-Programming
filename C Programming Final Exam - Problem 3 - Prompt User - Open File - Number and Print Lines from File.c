Kristi Adams
Final Exam - Problem 3

#include <stdio.h>

int main() {
   char filename[50];                           //max size filename

   printf("Please enter a file name: \n");      //prompt user - created names.txt to test this
   scanf("%s", filename);                       //read data into location

   FILE *fpointer = fopen(filename, "r");       //open file for reading

   if(fpointer){
      int count = 0;                            //begin count
      char buff[5000];                          //allow large size program
      while(fgets(buff, 5000, fpointer) != NULL){
         count++;                               //increment by 1
         printf("%d %s", count, buff);          //print and number file lines

      }
   }
  return 0;
}
