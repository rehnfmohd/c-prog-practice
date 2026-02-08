#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks:\n");
    scanf("%d",&marks);
    if (marks>=90 && marks<=100)
    {
        printf("A+");
    }
    else if (marks>=85 && marks<90)
    {
        printf("A");
    }
    else if (marks>=80 && marks<85)
    {
        printf("B+");
    }
    else if (marks>=70 && marks<80)
    {
        printf("B");
    }
    else if (marks>=60 && marks<70)
    {
        printf("C");
    }
    else if (marks>100)
    {
        printf("Invalid marks");
    }
    else
    {
        printf("Failed");
    }
    return 0;
}
