#include <stdio.h>
#include <stdbool.h>

bool StrCmpX(char *First, char *Second)
{
    while (*First != '\0' && *Second != '\0')
    {
        if (*First != *Second)
        {
            break;
        }
        First++;
        Second++;
    }

    if (*First == '\0' && *Second == '\0')
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Arr[30];
    char Brr[30];
    bool bRet = false;

    printf("Enter the First string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the Second string: \n");
    scanf(" %[^'\n']s", Brr);

    bRet = StrCmpX(Arr, Brr);

    if (bRet == true)
    {
        printf("Strings are identical\n");
    }
    else
    {
        printf("Strings are not identical\n");
    }

    return 0;
}