#undef __STRICT_ANSI__

#include <stdio.h>
#include <math.h>

float f(float x)
{
    return (1+x)*exp(x);
}

int main()
{
    FILE *pFile;
    float a, b, x, delta_x;
    printf("Programma aprēķina f(x)=(1+x)*e^x vērtību, pirmās un otrās kārtas atvasinājumus, izmantojot analītiskās formulas un diferencēšanu uz priekšu robežās [a;b].\n");
    printf("Ievadiet sākuma vērtību: ");
    printf("Ievadiet sākuma vērtību: ");
    scanf("%f",&a);
    printf("\nIevadiet beigu vērtību: ");
    scanf("%f",&b);
    printf("Ievadiet precizitāti: ");
    scanf("%f",&delta_x);
   
    pFile = fopen("derivative.dat", "w");
    
    fprintf(pFile, "f(x)=(1+x)*e^x\n");
    fprintf(pFile, "*_af - analītiskā formula\n*_fd - finite difference (diferencēšana uz priekšu)\n");
    fprintf(pFile, "\tx\t\t\t||\t\tf(x)\t\t||\tf'(x)_af\t\t|\tf'(x)_fd\t\t||\tf''(x)_af\t|\tf''(x)_fd\n");
    fprintf(pFile, "____________________________________________________________________________________________________\n");
    
    x = a;
    while (x < b)
    {
        fprintf(pFile, "%10.4f\t||\t%10.4f\t||\t%10.4f\t|\t%10.4f\t||\t%10.4f\t|\t%10.4f\n",x,f(x), (x+2)*exp(x), ((f(x+delta_x)-f(x)))/delta_x, (x+3)*exp(x), (f(x+2*delta_x)-2*f(x+delta_x)+f(x))/pow(delta_x,2));
        x += delta_x; 
    }
    fclose(pFile);
    printf("Programmas rezultāti ir saglabāti derative.dat failā.\n");
    return 0;
}