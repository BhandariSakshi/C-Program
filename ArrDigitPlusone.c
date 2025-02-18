#include <stdio.h>
#include <stdlib.h>

void PlusOne(int Ptr[], int* returnSize, int iSize) {
    for (int i = iSize - 1; i >= 0; i--) {
        if (Ptr[i] < 9) {
            Ptr[i] += 1;  
            *returnSize = iSize;  
            return;  
        }
        Ptr[i] = 0;  
    }

    *returnSize = iSize + 1; 
    Ptr = (int*) realloc(Ptr, (*returnSize) * sizeof(int));  

    for (int i = iSize; i > 0; i--) {
        Ptr[i] = Ptr[i - 1];
    }
    Ptr[0] = 1;  
}
int main() {
    int iCount = 0, returnSize;
    int *Arr = NULL;

    printf("Enter the number of elements you want to store: \n");
    scanf("%d", &iCount);

    Arr = (int*)malloc(iCount * sizeof(int));

    printf("Enter the elements: \n");
    for (int i = 0; i < iCount; i++) {
        scanf("%d", &Arr[i]);
    }

    PlusOne(Arr, &returnSize, iCount);

    printf("Resulting array after adding one: \n");
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", Arr[i]);
    }

    free(Arr);

    return 0;
}
