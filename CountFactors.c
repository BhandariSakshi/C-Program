# include <stdio.h>

int CountFactors(int iNo)
{
    int i = 0, iCount = 0;

    for ( i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            iCount++;
        }
        
    }
    return iCount;

}

int main()
{
    int iValue  = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = CountFactors(iValue);

    printf("Number of factors are: %d\n",iRet);

    return 0;

}