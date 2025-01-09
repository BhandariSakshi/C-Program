#include <stdio.h>
#include <math.h>

int FahToCel(float Start, float End, int Step)
{
    float cel = 0.0f;

    printf("Fahrenheit to celcius is: \n");
    for (float i = Start; i <= End; i = i + Step)
    {
        cel = (5.0 / 9.0) * (i - 32);

        if (cel >= 0)
        {
            printf("%0.2f\t%0.f\n", i, floor(cel));
        }
        else
        {
            printf("%0.2f\t%0.f\n", i, ceil(cel));
        }
    }
}

int main()
{
    float fStartF = 0.0f, fEndF = 0.0f, fRet = 0.0f;
    int Steps = 0;

    printf("Enter the start fahrenheit value: \n");
    scanf("%f", &fStartF);

    printf("Enter the end fahrenheit value: \n");
    scanf("%f", &fEndF);

    printf("Enter the step to be taken: \n");
    scanf("%d", &Steps);

    FahToCel(fStartF, fEndF, Steps);

    return 0;
}