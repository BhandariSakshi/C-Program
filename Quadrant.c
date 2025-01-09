# include <stdio.h>

void CheckQuadrant(int x, int y)
{
    if ((x > 0) && (y > 0))
    {
        printf("First quadrant\n");
    }
    else if ((x < 0) && (y > 0))
    {
        printf("second quadrant\n");
    }
    else if ((x < 0) && (y < 0))
    {
        printf("Third quadrant\n");
    }
    else if ((x > 0) && (y < 0))
    {
        printf("Fourth quadrant\n");
    }
    else if ((y == 0))
    {
        printf("X axis\n");
    }
    else if ((x == 0))
    {
        printf("Y axis\n");
    }
    else if ((x == 0) && (y == 0))
    {
        printf("Origin\n");
    }
    
}

int main()
{
    int x = 0, y = 0;

    printf("Enter the x co-ordinate: \n");
    scanf("%d", &x);

    printf("Enter the y co-ordinate: \n");
    scanf("%d", &y);

    CheckQuadrant(x,y);

    return 0;
}