#include<stdio.h>
#include<string.h>
int main()
{   char a[20];
    int j;
    float i;
    printf("Enter a string :");
    scanf("%s", a);
    printf("\n String is is: %s",a);
    
    sscanf(a,"%d",&j);//convert str to int
    
    sscanf(a,"%f",&i) ;//convert str to float
    printf("\n\nInteger value is: %d",j);
    
	   printf("\n\nfloat for int value is: %.2f",(float)j);
	   
    printf("\n\nfloat value for String is: %f",i);
    return 0;
}