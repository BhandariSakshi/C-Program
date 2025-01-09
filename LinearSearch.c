#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/// /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
// Function Name: LinearSearch
// Discription  : Used to Search whether the element is present or not
// Input        : Integer
// Output       : Boolean
// Author       : Sakshi Bhandari
// Date         : 2/07/2024
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool LinearSearch(int Arr[], int iSize, int iValue)
{
    bool bFlag = false;
    int i = 0;

    for ( i = 0; i < iSize; i++)
    {
        if (Arr[i] == iValue)
        {
            bFlag = true;
            break;
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
    scanf("%d", &iLength);

    Brr = (int *)malloc(iLength * sizeof(int));

    printf("Enter the element: \n");

    for (i = 0; i < iLength; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Enter the number that you want to search: \n");
    scanf("%d", &iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if (bRet == true)
    {
        printf("%d element is present\n", iValue);
    }
    else
    {
        printf("%d element is not present\n", iValue);
    }
    

    free(Brr);

    return 0;
}