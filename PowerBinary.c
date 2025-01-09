# include <stdio.h>

double Power(double iNo, int Pow)
{
    if (Pow == 0)
    {
        return 1.0;
    }
    if (iNo == 0)
    {
        return 0.0;
    }
    if (iNo == 1)
    {
        return 1.0;
    }
    if (iNo == -1 && Pow%2 != 0)
    {
        return -1.0;
    }
    if (iNo == -1 && Pow%2 == 0)
    {
        return 1.0;
    }
    
    long binForm = Pow;

    if (Pow < 0)
    {
        iNo = 1/iNo;
        binForm = -binForm;
    }
    
    double ans = 1;

    while (binForm > 0)
    {
        if (binForm % 2 == 1)
        {
            ans *= iNo;
        }
      
        iNo *= iNo;
        binForm /= 2;
    }
    return ans;
    
}

int main()
{
    double iValue = 0, iRet = 0;
    int iPower = 0;

    printf("Enter the number: \n");
    scanf("%lf", &iValue);

    printf("Enter the power: \n");
    scanf("%d", &iPower);

    iRet = Power(iValue, iPower);
    printf("Answer is: %lf\n", iRet);

    return 0;
}