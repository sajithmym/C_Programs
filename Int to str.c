#include<stdio.h>
#include<string.h>
int main()
{   char a[20];
    int j=500;

    sprintf(a,"%d", j);
    printf("\n str is %s", a);
    return 0;
}