# include <stdio.h>

int Ticket(int iAge)
{
    if (iAge <= 5)
    {
        return 0;
    }
    else if (iAge > 5 && iAge <= 18)
    {
        return 500;
    }
    else if (iAge > 18 && iAge <= 40)
    {
        return 1000;
    }
    else if (iAge > 40 && iAge <= 60)
    {
        return 800;
    }
    else
    {
        return 200;
    }
    
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter your age: \n");
    scanf("%d", &iValue);

    iRet = Ticket(iValue);

    printf("The ticket amount is: %d\n",iRet);

    return 0;
}