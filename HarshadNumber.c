# include <stdio.h>
# include <stdbool.h>

bool HarshadNum(int iNum)
{
    int iDigit = 0, oriNum = iNum, iSum = 0;
    bool bFlag = false;

    while(iNum > 0)
    {
        iDigit = iNum % 10;
        iSum += iDigit;
        iNum = iNum / 10;
    }

    if(oriNum % iSum == 0)
    {
        bFlag = true;
    }
 
    return bFlag;
}

int main()
{
    int Num = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d", &Num);

    bRet = HarshadNum(Num);

    if(bRet == true)
    {
        printf("It is Harshad Number\n");
    }
    else
    {
        printf("It is not Harshad Number\n");
    }

    return 0;
}