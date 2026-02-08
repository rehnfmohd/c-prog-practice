#include <stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the number:\n");
    scanf("%d",&n);
    for (i=2;i<n;i++)
    {
        if (n%i==0)
        {
            count=1;
        }
    }
    if (count==0)
    {
        printf("%d is prime\n",n);
    }
    else
    {
        printf("%d is composite",n);
    }
}