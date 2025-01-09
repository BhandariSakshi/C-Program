# include <stdio.h>

int SumFactors(int iNo)
{
    int iSum = 0, i = 0;

    for ( i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            iSum += i;
        }
        
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = SumFactors(iValue);
    printf("Sum of Factors are: %d\n",iRet);

    return 0;
}