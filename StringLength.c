# include <stdio.h>

int StrLenX(char *Str)
{
    int iCount = 0;

    while (*Str != '\0')
    {
        iCount++;
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

    iRet = StrLenX(Arr);
    printf("Length of the string is: %d\n", iRet);

    return 0;
}