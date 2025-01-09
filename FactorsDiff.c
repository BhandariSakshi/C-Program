# include <stdio.h>

int Difference(int iNo)
{
    int iAns = 0, i = 0, iSumF = 0, iSumN = 0;

    for ( i = 1; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            iSumF += i;
        }
        else
        {
            iSumN +=i;
        }
    }
    iAns = iSumN - iSumF;

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the any value: \n");
    scanf("%d", &iValue);

    iRet = Difference(iValue);
    printf("Differrnce between factors and nonfactors: %d\n", iRet);

    return 0;
}