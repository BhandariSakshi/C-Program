# include <stdio.h>
# include <stdbool.h>

bool Check(char ch)
{
    bool bFlag = false;

    if (ch >= 'A' && ch <= 'Z')
    {
        bFlag = true;
    }
    return bFlag;
}

int main()
{
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character: \n");
    scanf("%c", &ch);

    bRet = Check(ch);

    if (bRet == true)
    {
        printf("It is capital Letter\n");
    }
    else
    {
        printf("It is not capital\n");
    }
    

    return 0;
}