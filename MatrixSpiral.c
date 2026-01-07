#include<stdio.h>
int main()
{
    int a[5][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        {17,18,19,20}
    };

    int rs = 0, re = 5, cs = 0, ce = 4;
    int i, j;

    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 4; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\nSpiral Order:\n");

    while(rs < re && cs < ce)
    {
        for(i = cs; i < ce; i++)
            printf("%d\t", a[rs][i]);
        rs++;

        for(i = rs; i < re; i++)
            printf("%d\t", a[i][ce - 1]);
        ce--;

        if(rs < re) { for(i = ce - 1; i >= cs; i--)
                printf("%d\t", a[re - 1][i]);
            re--;
        }

        if(cs < ce) { for(i = re - 1; i >= rs; i--)
                printf("%d\t", a[i][cs]);
            cs++;
        }
    }

    return 0;
}
