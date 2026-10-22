#include <stdio.h>

void DisplayEvenFactor(int iNo)
{
    int icnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo == 0)
    {
        printf("Invalid");
        return;
    }

    for(icnt = 1; icnt <= iNo; icnt++)
    {
        if(iNo % icnt == 0 && icnt % 2 == 0)
        {
            printf("%d\t", icnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number\n");
    scanf("%d", &iValue);

    DisplayEvenFactor(iValue);

    return 0;
}