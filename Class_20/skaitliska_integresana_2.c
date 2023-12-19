#undef __STRICT_ANSI__
#include <stdio.h>
#include <math.h>

void main()
{
    float a=0., b=2, eps=1.e-3, h, integr2;
    int k, n=2;
    float integr1=2*eps;

    printf("Ievadiet a vērtību:");
    scanf("%f",&a);
    printf("Ievadiet b vērtību:");
    scanf("%f",&a);
    printf("Ievadiet precizitāti:");
    scanf("%f",&a);


    integr2=(b-a)*((1+a)*exp(a)+(1+b)*exp(b))/n;

    while(fabs(integr2-integr1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integr1=integr2;
        integr2=2*eps;
        for (k=0;k<n; k++)
        {
            integr2+=h*(1+(a+(k+0.5)*h))*exp(a+(k+0.5)*h);
        }
    } 
    printf("Intergrāļa vērtība: %.2f\n",integr2);
}