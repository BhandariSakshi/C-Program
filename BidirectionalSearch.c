# include <stdio.h>
# include <stdbool.h>
# include <stdlib.h>

bool BiDirectionalSearch(int Arr[], int iSize, int Value)
{
     bool flag = false;
     int iStart = 0, iEnd = 0;

     for (iStart = 0, iEnd = iSize-1; iStart <= iEnd; iStart++,iEnd--)
     {
        if (Arr[iStart] == Value || Arr[iEnd] == Value)
        {
            flag = true;
            break;
        }
     }
    return flag;     
}

int main()
{
    int iLength = 0, i = 0, iValue = 0;
    int *Brr = NULL;
    bool bRet = false;

    printf("Enter the number of element that you want to store: \n");
    scanf("%d",&iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter elements: \n");

    for ( i = 0; i < iLength; i++)
    {
       scanf("%d",&Brr[i]);
    }

    printf("Enter the element that you want to search: \n");
    scanf("%d",&iValue);

    bRet = BiDirectionalSearch(Brr, iLength, iValue);

    if (bRet == true)
    {
        printf("%d element is present\n",iValue);
    }
    else
    {
        printf("%d element is not present\n",iValue);
    }
    
    free(Brr);

    return 0;
}