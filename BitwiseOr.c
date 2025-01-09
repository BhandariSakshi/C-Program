# include <stdio.h>

int Or(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;

    iResult = iValue1 | iValue2;

    return iResult;

}

int main()
{
    unsigned int iNo1 = 0, iNo2 = 0, iRet = 0;

    printf("Enter the first number: \n");
    scanf("%d", &iNo1);

    printf("Enter the second number: \n");
    scanf("%d", &iNo2);

    iRet = Or(iNo1, iNo2);
    printf("Bitwise or of number is: %u\n", iRet);

    return 0;
}