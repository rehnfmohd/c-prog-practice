#include <stdio.h>
int main()
{
    int a[50];
    int i,n,max;
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for ( i = 0; i < n ;i++)
    {   
        if (a[i]>max)
        {
            max=a[i];
        }
    }
    printf("The largest from the array is %d",max);
    
}