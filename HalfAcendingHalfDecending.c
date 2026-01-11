# include <stdio.h>
# include <stdlib.h>

//3, 2, 4, 1, 10, 30, 40, 20
//1 2 3 4 40 30 20 10
void AscDecArray(int *Arr, int iSize)
{
    int temp = 0;

    for(int i = 0; i < iSize-1; i++)
    {
        for(int j = 0; j < iSize/2; j++)
        {
            if(Arr[j] > Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
        
        for(int j = iSize/2; j < iSize-1; j++)
        {
            if(Arr[j] < Arr[j+1])
            {
                temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }

    

    printf("Sorted array is: \n");
    for(int i = 0; i < iSize; i++)
    {
        printf("%d\t",Arr[i]);
    }
}

int main()
{
    int *Arr = NULL;
    int iCount = 0;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int*)malloc(iCount* sizeof(int));

    printf("Enter the array elements: \n");
    for (int i = 0; i < iCount; i++)
    {
        scanf("%d", &Arr[i]);
    }

    AscDecArray(Arr, iCount);

    return 0;
    
}