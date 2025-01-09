# include <stdio.h>

int DigitAddition(int iNo)
{
    static int iSum = 0;
    
    if(iNo != 0)
    {
        iSum = iSum + (iNo%10);
        iNo = iNo/10;
        DigitAddition(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);

    iRet = DigitAddition(iValue);
    printf("Sum of numbers is: %d\n",iRet);

    return 0;
}