# include <stdio.h>

void Display(int iValue)
{
    int i = 0;

    for(i = 1; i <= iValue; i++)
    {
        printf("%d\t%d\t", i, i);
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