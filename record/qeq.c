#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,D,x1,x2;
    printf("Enter the coefficients of a,b and c respectively:\n");
    scanf("%d%d%d",&a,&b,&c);
    D=(b*b)-4*a*c;
    if (D>0)
    {
        x1=(-b+sqrt(D)/2*a);
        x2=(-b-sqrt(D)/2*a);
        printf("Roots are %d and %d",x1,x2);
    }
    else if (D==0)
    {
        x1=b/2*a;
        printf("Root is %d",x1);
    }
    else
    {
        printf("Roots are complex and imaginary");
    }
    return 0;
}