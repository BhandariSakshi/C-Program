# include <stdio.h>
# include <stdbool.h>

bool CheckBit(unsigned int iNo)
{
    int iMask = 0x00000120;
    int iResult = 0;

    iResult = iNo & iMask;

    if (iResult == iMask)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%u", &iValue);

    bRet = CheckBit(iValue);

    if (bRet == true)
    {
        printf("6th and 9th bit is on\n");
    }
    else
    {
        printf("6th and 9th bit is off\n");
    }
    

    return 0;
}

