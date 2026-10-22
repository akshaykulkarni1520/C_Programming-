
#include <stdio.h>

void Display(int ino)
{
    if (ino > 10)
    {
        printf("hello\n");
    }
    else
    {
        printf("Demo\n");
    }
}

int main()
{
    int ivalue;

    printf("Enter the number\n");
    scanf("%d", &ivalue);

    Display(ivalue);

    return 0;
}
