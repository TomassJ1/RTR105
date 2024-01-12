#include<stdio.h>
#include<math.h>

double eksponensionala_funkcija(double x);


void main()
{
    double x,y,yy;
    printf("Funkcijas (1+x)*e^x aprēķināšana:\n");
    printf("Funkcijas definīcijas apgabals: x pieder R\n");
    printf("Ievadi argumentu x:  ");
    scanf("%lf",&x);
    printf("(1+%.2f)*e^(%.2f) = %.5f\n\n",x,x,(1+x)*exp(x));
    
    yy = eksponensionala_funkcija(x);
    printf("(1+%.2f)*e^(%.2f) caur summu: %.5f\n\n",x,x,yy);

    printf("                  1000\n");
    printf("                  _____\n");
    printf("                  \\               k\n");
    printf("                   \\       (1+x)*x\n");
    printf("(1+%.2f)*e^(%.2f) = > _______________________\n", x,x);
    printf("                   /\n");
    printf("                  /_____      k!\n");
    printf("                    k=0   \n\n\n\n");

    printf("                                   k\n");
    printf("                            (1+x)*x\n");
    printf("rekurences reizinātājs:   ________________\n");
    printf("                                 k!\n\n\n");




}

double eksponensionala_funkcija(double x)
{
    double a,S;
    int k=0;

    a = (1.+x);
    S = a;
   
    printf("a%d = %.2f;  S%d = %.2f\n",k,a,k,S);
    while(k<1000)
    {
        k++;
        a = (x*a)/k;
        S = S + a;

        if (k==999)
        {
            printf("a%d = %.2f;  S%d = %.2f\n",k,a,k,S);
        }
        if (k==1000)
        {
            printf("a%d = %.2f;  S%d = %.2f\n",k,a,k,S);
        }

    }


    return S;
}
