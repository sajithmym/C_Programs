#include<stdio.h> 
void main() 
{ float avg ;
 int a ; 
 int b;
 inputsnum(&a,&b);
 avg = average(a,b);
 outputsavge(avg); } 

int average (int a,int b) 
{ return((a+b)/2.0); } 

void inputsnum(int *a,int *b) 
{ printf("\n enter first no");
 scanf("%d",&a);
 printf("\enter 2nd no"); 
scanf("%d",&b); } 

void outputsavge(float x) {
 printf("\n averageis%f",x);
}