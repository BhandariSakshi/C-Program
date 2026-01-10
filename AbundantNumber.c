# include <stdio.h>

int AbundantNum(int iNum)
{
    int iSum = 0;

    for(int i = 1; i < iNum; i++)
    {
        if(iNum % i == 0)
        {
            iSum += i;
        }
    }

    return iSum;
}

int main()
{
    int Num = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &Num);

    iRet = AbundantNum(Num);

    if(iRet > Num)
    {
        printf("It is Abundant Number and abundance is %d",(iRet-Num));

    }
    else{
        printf("It is not a Abundant Number\n");
    }

    return 0;
}