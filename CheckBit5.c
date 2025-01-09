# include <stdio.h>
# include <stdbool.h>

int UpdateBit(unsigned int iNo)
{
    unsigned int iMask = 0xffff7fff;
    unsigned int iResult = 0;

    iResult = iNo & iMask;

    return iResult;
}

int main()
{
    unsigned int iValue = 0;
    unsigned int iRet = 0;

    printf("Enter the number: \n");
    scanf("%u", &iValue);

    iRet = UpdateBit(iValue);
    printf("Updated number is: %u\n", iRet);
    

    return 0;
}

