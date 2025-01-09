# include <stdio.h>

int CountVowel(char *Str) // case sensitive
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str == 'a' || *Str == 'e' || *Str == 'i' || *Str == 'o' || *Str == 'u')
        {
            iCount++;
        }
        Str++;
    }
    return iCount;
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountVowel(Arr);
    printf("Number of vowels in string is: %d\n", iRet);

    return 0;
}