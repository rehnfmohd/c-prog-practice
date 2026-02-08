#include <stdio.h>

int main()
{
    int a[50], o[50], e[50];
    int n, i;
    int ec = 0, oc = 0;

    printf("Enter the limit:\n");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            e[ec++] = a[i];   // evens go to e[]
        }
        else
        {
            o[oc++] = a[i];   // odds go to o[]
        }
    }

    printf("The even elements of the array are:\n");
    for (i = 0; i < ec; i++)
    {
        printf("%d\n", e[i]);
    }

    printf("The odd elements of the array are:\n");
    for (i = 0; i < oc; i++)
    {
        printf("%d\n", o[i]);
    }

    return 0;
}
