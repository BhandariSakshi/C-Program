# include <stdio.h>

void DisplayArray(int *ptr, int iSize)
{
    int i = 0;

    for ( i = 0; i < iSize; i++,ptr++)
    {
        printf("%d\t",*ptr);
    }
    
}
int main()
{
    int Arr[] = {10,20,30,40,50};
    int iSize = 5;

    DisplayArray(Arr, iSize);

    return 0;

}