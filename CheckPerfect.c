# include <stdio.h>
# include <stdbool.h>

bool CheckPerfect(int iNo)
{
    int iSum = 0, i = 0;

    for ( i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            iSum += i;
        }
        
    }
    if (iSum == iNo)
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    bRet = CheckPerfect(iValue);

    if(bRet == true)
    {
        printf("%d is a perfect number\n",iValue);
    }
    else
    {
        printf("%d is not a perfect number\n",iValue);
    }

    return 0;
}