# include <stdio.h>

void Check(char ch)
{
    if (ch >= 65 && ch <= 90)
    {
        printf("It is the capital letter\n");
    }
    else
    {
        printf("It is not capital letter\n");
    }
    
}

int main()
{
    char ch = '\0';


    printf("Enter the character: \n");
    scanf("%c", &ch);

    Check(ch);

    return 0;
}