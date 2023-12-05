#undef __STRICT_ANSI__
#include <stdio.h>
#include <math.h>

void main()
{
    float a=0., b=M_PI/2, eps=1.e-3, h, integr2;
    int k, n=2;
    float integr1=2*eps;

    integr2=(b-a)*(sin(a)+sin(b))/n;

    while(fabs(integr2-integr1)>eps)
    {
        n*=2;
        h=(b-a)/n;
        integr1=integr2;
        integr2=2*eps;
        for (k=0;k<n; k++)
        {
            integr2+=h*sin(a+(k+0.5)*h);
        }
    } 
    printf("Intergrāļa vērtība: %.2f\n",integr2);
}