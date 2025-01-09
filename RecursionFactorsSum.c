# include <stdio.h>

int Sum(int iNo)
{
    static int i = 1;
    static int iSum = 0;

    if(i <= (iNo/2))
    {
        if(iNo % i == 0)
        {
           iSum = iSum + i;
        }
        i++;
        Sum(iNo);
    }

    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    iRet = Sum(iValue);
    printf("Sum of factors is: %d\n",iRet);

    return 0;
}