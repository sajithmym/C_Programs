#include<stdio.h>
#include<string.h>

int main()
{   extern int display();
	char a[20];
    int j=9876;
    display();
    sprintf(a,"%d", j);printf("\n \tuse sprintf {Int to Str} String  : %s", strcat(a," SaJiTh"));
    sscanf(a,"%d", &j);printf("\n \tuse  sscanf {Str to Int} Integer : %d\n\n", j+124);
    display();
    return 0;
}
