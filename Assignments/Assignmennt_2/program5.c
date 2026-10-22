
#include <stdio.h>

void Check(int iNo)
{
    if (iNo % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
}

int main()
{
    int iValue;

    printf("Enter the number\n");
    scanf("%d", &iValue);

    Check(iValue);

    return 0;
}
