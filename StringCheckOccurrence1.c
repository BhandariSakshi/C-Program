# include <stdio.h>
# include <stdbool.h>

bool CheckOccurrence(char *Str)
{
    bool bFlag = false;

    while (*Str != '\0')
    {
        if (*Str == 'w' || *Str == 'W')
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
    char Arr[100];
    bool bRet = false;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    bRet = CheckOccurrence(Arr);

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