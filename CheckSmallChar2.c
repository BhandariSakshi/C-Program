# include <stdio.h>

void Check(char ch)
{
    if (ch >= 97 && ch <= 122)
    {
        printf("It is the small letter\n");
    }
    else
    {
        printf("It is not small letter\n");
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