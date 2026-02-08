#include <stdio.h>
int main()
{
    int i=10;
    while (i<=15)
    {
        if (i%2==0)
        {
            printf("%d is even\n",i);
        }
        i++;
    }
}