# include <stdio.h>

int Difference(int iNo)
{
    int iAns = 0, iSumE = 0, iSumO = 0, iDigit = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;

        if (iDigit % 2 == 0)
        {
            iSumE += iDigit;
        }
        else
        {
            iSumO += iDigit;
        }
        iNo = iNo / 10;
    }
    iAns = iSumE - iSumO;

    return iAns;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = Difference(iValue);
    printf("Difference between sum of even and odd digit: %d\n", iRet);

    return 0;
}