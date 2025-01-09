# include <stdio.h>

int Find(int iNo, int iPow)
{
    int iMul = 1, i = 1;

    for ( i = 1; i <= iPow; i++)
    {
        iMul = iMul*iNo;
    }
    return iMul;
}

int main()
{
    int iValue = 0, iPower = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    printf("Enter the value of power: \n");
    scanf("%d", &iPower);

    iRet = Find(iValue, iPower);
    printf("Value is: %d\n",iRet);

    return 0;
}