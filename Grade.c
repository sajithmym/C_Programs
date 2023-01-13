#include<stdio.h>

int main()
{    int m;
    printf("Enter a mark :- ");
    scanf("%d", & m);
    if (m>100 || m<0){     
		printf(" \n \t\t Invalid Marks...\n");
    } 
    else if (m>=75)
       { printf("\n\tGrade is A");} 
    else if (m>=65)
       { printf("\n\tGrade is B");} 
    else if (m>=55)
       { printf("\n\tGrade is C");} 
    else if (m>=35)
       { printf("\n\tGrade is S");} 
    else{ 
		 printf("\n\tGrade is W");
         printf("\n\tFail.. "); 
       } 
    return 0;
}
