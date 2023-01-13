#include<stdio.h>
#include<string.h>
int main()
{   char a[20]="3000";
    int j;
    //sprintf(a,"%d", j);
    //printf("\n str is %s", a);
    
    sscanf(a,"%.4d",&j);
	   printf("\nInteger value is: %d",j);
	
    return 0;
}
