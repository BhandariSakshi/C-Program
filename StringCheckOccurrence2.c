# include <stdio.h>
# include <stdbool.h>

bool CheckOccurrence(char *Str, char ch)
{
    bool bFlag = false;

    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            bFlag = true;
            break;
        }
        Str++;
    }
    return bFlag;
}

int main()
{
    char Arr[100], cValue = '\0';
    bool bRet = false;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the charecter which you want to search: \n");
    scanf(" %c", &cValue);

    bRet = CheckOccurrence(Arr, cValue);

    if (bRet == true)
    {
        printf("Charecter is present\n");
    }
    else 
    {
        printf("Charecter is not present\n");
    }

   return 0; 
}