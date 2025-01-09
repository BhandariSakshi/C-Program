# include <stdio.h>

int CountSpaces(char *Str)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        if (*Str == ' ')
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

    iRet = CountSpaces(Arr);
    printf("Number of spaces are: %d\n", iRet);

    return 0;
}