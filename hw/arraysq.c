#include <stdio.h>
int main()
{
    int a[50];
    int b[50];
    int n,i;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=0;i<n;i++)
    {
        b[i]=a[i]*a[i];
    }
    printf("The elements of array b are\n");
    for (i=0;i<n;i++)
    {
        printf("%d\n",b[i]);
    }
}