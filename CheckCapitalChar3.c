# include <stdio.h>
# include <stdbool.h>

bool Check(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
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