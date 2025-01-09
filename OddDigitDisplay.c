# include <stdio.h>

void OddDigit(int iNo)
{
    int iDigit = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 != 0)
        {
            printf("%d\n",iDigit);
        }
        iNo = iNo / 10;
    }
    
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    OddDigit(iValue);

    return 0;
}