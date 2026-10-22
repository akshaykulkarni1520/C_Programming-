
#include <stdio.h>

void Accept(int iNo)
{
    int icnt = 0;

    for (icnt = 1; icnt <= iNo; icnt++)
    {
        printf("*");
    }
}

int main()
{
    int ivalue = 0;

    printf("Enter The Number\n");
    scanf("%d", &ivalue);

    Accept(ivalue);

    return 0;
}
