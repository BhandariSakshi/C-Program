# include <stdio.h>

void Display(int iValue)
{
    int i = 0;

    for (i = 1; i <= iValue; i++)
    {
        printf("&\t",i);
    }
    printf("\n");
    for (i = 0; i < iValue; i++)
    {
        printf("#\t");
    }
    printf("\n");
    for (i = 0; i < iValue; i++)
    {
        printf("*\t");
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}