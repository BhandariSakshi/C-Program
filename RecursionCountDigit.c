# include <stdio.h>

int DigitCount(int iNo)
{
    static int iCount = 0;
    
    if(iNo != 0)
    {
        iNo = iNo/10;
        iCount++;
        DigitCount(iNo);
    }

    return iCount;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = DigitCount(iValue);
    printf("number of digits are: %d\n",iRet);

    return 0;
}