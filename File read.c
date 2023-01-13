#include<stdio.h>
#include<conio.h>
int main()
{   char i[100];
    FILE *fp;
    fp=fopen("ak.txt","r");
    fscanf(fp,"%s",i);
    fclose(fp);
    
    printf("%s",i);
    return 0;
}