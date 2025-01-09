# include <stdio.h>

void Display(int iNo)
{
    printf("Decimal number: %d", iNo);
    printf("\nOctal number: %o", iNo);
    printf("\nHexadecimal number: %x", iNo);
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    Display(iValue);
    return 0;
}