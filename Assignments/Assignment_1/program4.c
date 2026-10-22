
#include <stdio.h>

typedef int Bool;
#define True 1
#define False 0

Bool check(int ino)
{
    if ((ino % 5) == 0)
    {
        return True;
    }
    else
    {
        return False;
    }
}

int main()
{
    int ivalue = 0;
    Bool iRet = False;

    printf("Enter The Number\n");
    scanf("%d", &ivalue);

    iRet = check(ivalue);

    if (iRet == True)
    {
        printf("Number is divisible by 5\n");
    }
    else
    {
        printf("Number is not divisible by 5\n");
    }

    return 0;
}
