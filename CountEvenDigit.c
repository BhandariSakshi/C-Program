# include <stdio.h>

int EvenDigit(int iNo)
{
    int iDigit = 0;
    int iCount = 0;

    while (iNo > 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = EvenDigit(iValue);

    printf("Number of even digits are: %d\n",iRet);

    return 0;
}