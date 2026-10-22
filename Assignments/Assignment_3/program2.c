#include <stdio.h>

void EvenFactors(int iNo)
{
    int icnt = 0;

    if(iNo <= 0)
    {
        printf("Invalid Number");
        return;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(iNo % icnt == 0)
        {
            if(icnt % 2 == 0)
            {
                printf("%d\n", icnt);
            }
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    EvenFactors(iValue);

    return 0;
}