# include <stdio.h>

int Factorial(int iNo)
{
    int iFact = 1, i = 0;

    for ( i = 1; i <= iNo; i++)
    {
        iFact = iFact * i;
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is: %d\n", iRet);

    return 0;
}