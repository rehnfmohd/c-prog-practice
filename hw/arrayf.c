#include <stdio.h>

int main()
{
    int a[50], f[50];
    int n, i, j;
    int fact;

    printf("Enter the limit:\n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        fact = 1;   // reset for each number

        for (j = 1; j <= a[i]; j++)
        {
            fact = fact * j;
        }

        f[i] = fact;
    }

    printf("Factorials are:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d! = %d\n", a[i], f[i]);
    }

    return 0;
}
