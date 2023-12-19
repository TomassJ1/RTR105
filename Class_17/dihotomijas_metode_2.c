#include <stdio.h>
#include <math.h>

float modified_exp(float x, float A){
    return (1+x)*exp(x)-A;
}

void main()
{
    float a, x, delta_x, b, y, A, rezultats;
    //a = -2;
    //b = 1;
    int iteracijas=0, ir_sakne;

    printf("Cien. liet., lūdzu, ievadi A vērtību sekojošajam vienādojumam: (1+x)*e^x = A\n");
    scanf("%f",&A);
    printf("Cien. liet., lūdzu, ievadi a vērtību sekojošajam vienādojumam: (1+x)*e^x = A\n");
    scanf("%f",&a);
    printf("Cien. liet., lūdzu, ievadi b vērtību sekojošajam vienādojumam: (1+x)*e^x = A\n");
    scanf("%f",&b);
    printf("Cien. liet., lūdzu, ievadi precizitāti:\n");
    scanf("%f",&delta_x);
    x = a;
    //delta_x = 0.01;
    //printf("\tx\ty\n");
    while(x<b)
    {
        iteracijas++;
        if (modified_exp(x,A)*modified_exp(x+delta_x,A)<0){rezultats = (2*x-delta_x)/2, ir_sakne=1;}
        x += delta_x;
        
    }
    printf("Iteraciju skaits: %i\n", iteracijas);
    if (ir_sakne==1) {printf("x =  %f\n", rezultats);}
    else {printf("Norādītajā intervālā sakņu nav!\n");}

}