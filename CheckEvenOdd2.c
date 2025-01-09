# include <stdio.h>
# include <stdbool.h>

bool Check(int iNo)
{
    if (iNo % 2 == 0)
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

    bRet = Check(iValue);

    if (bRet == true)
    {
        printf("%d is even number\n", iValue);
    }
    else
    {
        printf("%d is an odd number\n", iValue);
    }
    

    return 0;
}