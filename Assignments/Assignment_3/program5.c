#include <stdio.h>

void CheckVowel(char cValue)
{
    if(cValue == 'a' || cValue == 'e' ||
       cValue == 'i' || cValue == 'o' ||
       cValue == 'u' || cValue == 'A' ||
       cValue == 'E' || cValue == 'I' ||
       cValue == 'O' || cValue == 'U')
    {
        printf("Vowel");
    }
    else
    {
        printf("Not Vowel");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter character\n");
    scanf(" %c", &cValue);

    CheckVowel(cValue);

    return 0;
}