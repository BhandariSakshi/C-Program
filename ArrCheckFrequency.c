# include <stdio.h>
# include <stdlib.h>

void DisplayFrequency(int *Brr, int iSize)
{
    int newArr[iSize];
    int iNum = 0;

    for(int i = 0; i < iSize; i++)
    {
        int iCnt = 0;
        for(int j = 0; j <= i; j++)
        {
            if(Brr[i] == Brr[j])
            {
                iCnt++;
            }
        }
        if(iCnt == 1)
        {
            newArr[iNum] = Brr[i];
            iNum++;
        }
    }

    for(int i = 0; i < iNum; i++)
    {
        int iFreq = 0;
        for(int j = 0; j < iSize; j++)
        {
            if(newArr[i] == Brr[j])
            {
                iFreq++;
            }
        }

        printf("%d occurs %d times\n", newArr[i], iFreq);
    }
}

int main()
{
    int iCount = 0;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for(int i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    DisplayFrequency(Arr, iCount);

    return 0;

}