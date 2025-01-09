# include <stdio.h>
# include <stdbool.h>

bool CheckPrime(int iNo)
{
    bool bFlag = true;

    for (int i = 2; i < iNo; i++)
    {
        if (iNo % i == 0)
        {
            bFlag = false;
            break;
        }
        
    }
    
    return bFlag;

}

int main()
{
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    bRet = CheckPrime(iValue);

    if (bRet == true)
    {
        printf("It is a prime number\n");
    }
    else
    {
        printf("It is not a prime number\n");
    }
    
    return 0;
}