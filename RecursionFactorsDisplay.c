# include <stdio.h>

void Display(int iNo)
{
    static int i = 1;


    if(i <= (iNo/2))
    {
        if(iNo % i == 0)
        {
            printf("%d\t",i);
        }
        i++;
        Display(iNo);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number: \n");
    scanf("%d",&iValue);
    
    printf("Factors are: \n");
    Display(iValue);

    return 0;
}