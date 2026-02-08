#include <stdio.h>
int main()
{
    int m,rem,rev=0,i,n;
    int arr[50];
    printf("Enter the limit:\n");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for (i=0;i<n;i++)
    {
        m=arr[i];
        while (arr[i]>0)
        {
            rem=arr[i]%10;
            rev=(rev*10)+rem;
            arr[i]=arr[i]/10;
        }
        if (m==rev)
        {
            printf("%d is palindrome\n",m);
        }      
        else
        {
            printf("%d is not palindrome\n",m);
        }
    }
}