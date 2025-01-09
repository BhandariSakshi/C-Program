# include <stdio.h>
# include <stdbool.h>

bool Check(char ch)
{
    bool bFlag = false;

    if (ch >= 'a' && ch <= 'z')
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
        printf("It is small Letter\n");
    }
    else
    {
        printf("It is not small\n");
    }
    

    return 0;
}