
#include <stdio.h>

void Display(int ino)
{
    int icnt = 0;

    while (icnt < ino)
    {
        printf("* ");
        icnt++;
    }

    printf("\n");
}

int main()
{
    int ivalue;

    printf("Enter the number\n");
    scanf("%d", &ivalue);

    Display(ivalue);

    return 0;
}
