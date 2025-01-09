# include <stdio.h>

void Swap(int *P, int *Q)
{
    int temp = 0;

    temp = *P;
    *P = *Q;
    *Q = temp;
    
}

int main()
{
    int A = 0, B = 0;

    printf("Enter the value of A: \n");
    scanf("%d",&A);

    printf("Enter the value of B: \n");
    scanf("%d",&B);

    Swap(&A,&B);

    printf("Value of A after swapping: %d\n",A);
    printf("Value of B after swapping: %d\n",B);

    return 0;
}