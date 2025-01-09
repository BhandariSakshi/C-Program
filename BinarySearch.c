# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>

bool BinarySearch(int Arr[], int iSize, int Value)
{
    bool bFlag = false;
    int iStart = 0, iEnd = iSize-1, iMid = 0;

    while (iStart <= iEnd)
    {
        iMid = iStart + ((iEnd - iStart)/2);

        if ((Arr[iMid] == Value) || (Arr[iStart] == Value) || (Arr[iEnd] == Value))
        {
           bFlag = true;
           break;
        }
        else if (Value < Arr[iMid])
        {
            iStart = iMid+1;
        }
        else if (Value > Arr[iMid])
        {
            iEnd = iMid-1;
        }
    }
    return bFlag;    

}

int main()
{
    int iLength = 0, i = 0, iValue = 0;
    int *Brr = NULL;
    bool bRet = false;

    printf("Enter the number of element you want to store: \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength *sizeof(int));

    printf("Enter elements: \n");

    for( i = 0; i < iLength; i++)
    {
        scanf("%d",&Brr[i]);
    }
    
    printf("Enter the element you want to search: \n");
    scanf("%d",&iValue);

    bRet = BinarySearch(Brr, iLength, iValue);

    if (bRet == true)
    {
        printf("%d is present\n",iValue);
    }
    else
    {
        printf("%d is not present\n",iValue);
    }

    free(Brr);

    return 0;
}