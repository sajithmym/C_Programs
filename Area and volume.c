#include<stdio.h>
#define pi (22/7.0)
#include<math.h>
int main()
{   float r,l;
    printf("Enter radius : ");
    scanf("%f", &r);
    printf("Enter Lenth : ");
    scanf("%f", &l);
    printf("\n Area is : %.3f ", pi*pow(r,2));
    printf("\n Volume is : %.3f ", pi*pow(r,2)*l);
    return 0;
}