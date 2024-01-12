#include<stdio.h>
#include<math.h>

double eksponensionala_funkcija(double x);


void main()
{
    double x; //mainīgo deklarēšana

    /*Dialogs ar lietotāju*/
    printf("Funkcijas (1+x)*e^x aprēķināšana:\n");
    printf("Programma strādā pareizi, ja x ir [-31;703]\n");
    printf("Ievadi argumentu x:  ");
    scanf("%lf",&x);

    /*Teilora rindas un funkcijas vērtības aprēķināšana*/
    printf("(1+%.2f)*e^(%.2f) = %.5f\n\n",x,x,(1+x)*exp(x)); 
    printf("(1+%.2f)*e^(%.2f) caur summu: %.5f\n\n",x,x,eksponensionala_funkcija(x));

    /*Summas izteiksmes un rekurences funkcionālā reizinātāja 
    zīmēšana ar ASCII simbolu palīdzību*/
    printf("                  1000\n");
    printf("                  _____\n");
    printf("                  \\               k\n");
    printf("                   \\       (1+x)*x\n");
    printf("(1+%.2f)*e^(%.2f) = > _______________________\n", x,x);
    printf("                   /\n");
    printf("                  /_____      k!\n");
    printf("                    k=0   \n\n\n\n");

    
    printf("                            x\n");
    printf("rekurences reizinātājs:   _____\n\n");
    printf("                            k\n\n\n");


    return 0;

}

double eksponensionala_funkcija(double x)
{
    long double a,S; //long double datu tips, lai varētu parādīt, ka pēdējie a un S nav nulle
    int k=0;

    a = (1.+x);
    S = a;
   
    printf("a%d = %.2Lf;  S%d = %.2Lf\n",k,a,k,S);
    while(k<1000)
    {
        k++;
        a = (x*a)/k;
        S = S + a;

        if (k==999)
        {
            printf("a%d = %Le\nS%d = %.2Le\n",k,a,k,S);
        }
        if (k==1000)
        {
            printf("a%d = %Le\nS%d = %.2Le\n",k,a,k,S);
        }

    }


    return S;
}
