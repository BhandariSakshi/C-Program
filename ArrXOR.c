
//You're given an array A of integers. You need to compute the following XOR:
//Where f(x) is the number of set bits (1s) in the binary representation of x.
//(A[0] + f(1)) ^ (A[1] + f(2)) ^ (A[2] + f(3)) ^ ... ^ (A[N-1] + f(N))

//A = [1, 2, 3]
//Output:
//4

# include <stdio.h>

int countBits(int x)
{
    int cnt = 0;
    while (x) {
        cnt += (x & 1);
        x >>= 1;
    }
    return cnt;
}

int Xor(int Brr[], int Count)
{
    int result = 0;
    for(int i = 0; i < Count; i++)
    {
        int ans = countBits(i+1);
        result ^= (Brr[i]+ans);
    }

    return result;
}


int main()
{
    int Arr[100];
    int iCnt = 0, iRet = 0;

    printf("Enter the number of elements that you want to store: \n");
    scanf("%d", &iCnt);

    printf("Enter the elements: \n");
    for (int i = 0; i < iCnt; i++)
    {
        scanf("%d", &Arr[i]);
    }

    iRet = Xor(Arr, iCnt);
    printf("Ans is: %d\n",iRet);
    

    return 0;
}
