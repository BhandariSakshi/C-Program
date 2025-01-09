# include <stdio.h>

int CheckLastOcc(char Str[], char ch)
{
    int iPos = -1, iCount = 1;

    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            iPos = iCount;
        }
        iCount++;
        Str++;
    }
    return iPos;
}

int main()
{
    char Arr[100], cValue = '\0';
    int iRet = 0;

    printf("Enter the String: \n");
    scanf("%[^'\n']s",Arr);

    printf("Enter the charecter: \n");
    scanf(" %c",&cValue);

    iRet = CheckLastOcc(Arr, cValue);

    if (iRet != -1)
    {
        printf("Last occurrence of the charecter is: %d\n", iRet);
    }
    else
    {
        printf("No such element is present\n");
    }

    return 0;
}