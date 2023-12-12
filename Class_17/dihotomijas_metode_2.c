#include <stdio.h>
#include <math.h>

float modified_exp(float x, float A){
    return (1+x)*exp(x)-A;
}

void main()
{
    float a, x, delta_x, b, y, A;
    a = -2;
    b = 1;

    printf("Cien. liet., lūdzu, ievadi A vērtību sekojošajam vienādojumam: (1+x)*e^x = A\n");
    scanf("%f",&A);
    x = a;
    delta_x = 0.01;
    printf("\tx\ty\n");
    while(x<b)
    {
        printf("%10.3f%10.3f\n", x, modified_exp(x,A));

        x += delta_x;
    }
}