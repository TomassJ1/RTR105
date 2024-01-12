#undef __STRICT_ANSI__
#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (1+x)*exp(x);
}

void main()
{
    float a, b, eps, h, integr2, integr1;
    int k, n=2, m=1;
    
    printf("Programma aprēķina f(x)=(1+x)*e^x integrāļa vērtību robežās [a;b].\n");
    printf("Ievadiet a vērtību: ");
    scanf("%f",&a);
    printf("Ievadiet b vērtību: ");
    scanf("%f",&b);
    printf("Ievadiet precizitāti: ");
    scanf("%f",&eps);

    integr1=2*eps;
    integr2=(b-a)*(f(a)+f(b))/n;
    
    /*Taisnstūru metode*/
    while(fabs(integr2-integr1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integr1=integr2;
        integr2=0;
        for (k=0;k<n; k++)
        {
            integr2+=h*f((a+(k+0.5)*h));
        }
    } 
    printf("\nIntegrāļa vērtiba izmantojot taisnstūra metodi:\n");
    printf("Intergrāļa vērtība: %.4f\n",integr2);
    printf("Iterāciju skaits: %.0f\n\n",log2(n));

    /*Trapeču metode*/
    n=2;
    integr1=2*eps;
    integr2=(b-a)*(f(a)+f(b))/n;
    n=2;
    while(fabs(integr2-integr1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integr1=integr2;
        integr2=0;
        for (k=0;k<n; k++)
        {
            integr2+=h*((f(a+(k*h))+f(a+((k+1)*h)))/2);
        }
    } 
    printf("Integrāļa vērtiba izmantojot trapeču metodi:\n");
    printf("Intergrāļa vērtība: %.4f\n",integr2);
    printf("Iterāciju skaits: %.0f\n\n",log2(n));

    /*Simpsona metode*/
    
    integr1=2*eps;
    integr2=(b-a)*(f(a)+f(b))/n;

    while(fabs(integr2-integr1)>eps)
    {
        m*=2;
        n=2*m;
        h=(b-a)/n;
        integr1=integr2;
        integr2=0.;
        for (k=1;k<=m-1; k++)
        {
            integr2=integr2+2.*(2.*f(a+(2*k-1)*h)+f(a+2*k*h));
        }
        integr2=integr2+f(a)+f(b)+4.*f(b-h);
        integr2*=h/3.;
    } 
    printf("Integrāļa vērtiba izmantojot Simpsona metodi:\n");
    printf("Intergrāļa vērtība: %.4f\n",integr2);
    printf("Iterāciju skaits: %.0f\n",log2(n));
    
}