# include <stdio.h>

void Display(int iNo)
{
    int i = 0;

    printf("Factors of %d are: \n", iNo);

    for ( i = 1; i <= iNo/2; i++)
    {
        if (iNo % i == 0)
        {
            printf("%d\n",i);
        }
        
    }
    

}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}