# include <stdio.h>

int CountDigit(int iNo)
{
    int iCount = 0;

    while (iNo != 0)
    {
        iCount++;
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = CountDigit(iValue);
    printf("Number of digits are: %d\n",iRet);

    return 0;

}