# include <stdio.h>

int Sqrt(int iNum)
{
    if(iNum == 0 || iNum == 1)
    {
        return iNum;
    }

    int left = 1, right = iNum, ans = 0;

    while(left <= right)
    {
        long long mid = left + (right-left)/2;

        if(mid*mid == iNum)
        {
            return mid;
        }
        else if (mid*mid < iNum)
        {
            ans = mid;
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
        
    }
    return ans;
}


int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    iRet = Sqrt(iValue);
    printf("Square root is: %d\n",iRet);


    return 0;
}