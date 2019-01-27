//Kristi Adams
//Final #2

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

char * CONNECT(char *str1,char*str2,char* str3)
{
    char * str;
    str=(char *)malloc(1500 *sizeof(char));
    str[0]= '\0';

    strcat(str,str1);           //append
    strcat(str,str2);           //append
    strcat(str,str3);           //append

    return str;

}

int main()

{
    char str1[500],str2[500],str3[500];                                 //string size
    char * str;
    str=(char *) malloc(sizeof(char)*1500);                             //combined size

    printf("Please enter a sentence, followed by a space: ");           //prompt user
    gets(str1);                                                         //collect info

    printf("\nPlease enter another sentence, followed by a space: ");   //prompt user
    gets(str2);                                                         //collect info

    printf("\nPlease enter a third sentence, followed by a space: ");   //prompt user
    gets(str3);                                                         //collect info

    str=CONNECT(str1,str2,str3);                                        //connect sentences
    printf("\n\nHere is your new sentence!  %s\n\n",str);               //print new sentence
}
