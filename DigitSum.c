# include <stdio.h>

int DigitSum(int iNo)
{
    int iSum = 0, iDigit = 0;

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = DigitSum(iValue);

    printf("Sum of digits: %d\n",iRet);

    return 0;

}