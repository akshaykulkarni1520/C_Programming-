#include <stdio.h>

void PrimeEven(int iNo)
{
    int icnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid");
        return;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        printf("%d\t", icnt * 2);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    PrimeEven(iValue);

    return 0;
}