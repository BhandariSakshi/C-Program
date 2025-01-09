# include <stdio.h>
# include <stdbool.h>
int CheckPosition(char *Str, char ch)
{
    int iCount = 0;
    bool bFlag = false;

    while (*Str != '\0')
    {
        if (*Str == ch)
        {
            bFlag = true;
            break;
        }
        iCount++;
        Str++;
    }
    if (bFlag == true)
    {
        return iCount;
    }
    else 
    {
        return -1;
    }
    
}


int main()
{
    char Arr[100], cValue = '\0';
    int iRet = 0;

    printf("Enter the string: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the charecter of which you want to find position of: \n");
    scanf(" %c", &cValue);

    iRet = CheckPosition(Arr, cValue);

    if (iRet != -1)
    {
        printf("Charecter is at position: %d\n",iRet);
    }
    else
    {
        printf("Charecter not found");
    }
    

    return 0;
}