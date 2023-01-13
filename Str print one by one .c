#include<stdio.h>

int main()
{   char *p;
    for (p="Mohamed sajith cool";*p!='\0';p++) {
       putchar(*p);
       putchar('\n') ;
    } 
    return 0;
}