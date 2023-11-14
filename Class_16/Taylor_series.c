#include<stdio.h>
#include<math.h>



double eksponensionala_funkcija(double x)
{
double a,S;
int k=0;

a = (1.+x);
S = a;
printf("%.2f\t%8.2f\t%8.2f\n", x,a, S);

while(k<1000)
{
k++;
a = (x*a)/k;
S = S + a;
//printf("%.2f\t%8.2f\t%8.2f\n", x,a, S);
}

//S = (1.+x)*S;
return S;
}

void main()
{
double x=4.,y,yy;
y=(1+x)*exp(x);
printf("standarta funkcija exp - y=(1+%.2f)*exp(%.2f)=%.5f\n",x,x,y);

yy = eksponensionala_funkcija(x);
printf("lietotaaja funkcija - y=eksponensionala_funkcija(%.2f)=%.5f\n",x,yy);
}

