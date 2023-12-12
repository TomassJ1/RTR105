#undef __STRICT_ANSI__

#include <stdio.h>
#include <math.h>

int main()
{
    FILE *pFile;
    float a = 0., b = 2 * M_PI, x, delta_x = 1.e-2;
    printf("Ievadiet sākuma vērtību: ");
    scanf("%f",&a);
    printf("\nIevadiet beigu vērtību: ");
    scanf("%f",&b);
    printf("Ievadiet precizitāti: ");
    scanf("%f",&delta_x);

    // floaty;
    pFile = fopen("derivative.dat", "w");
     
    //printf("\tx\t\tsin(x)\t\tcos(x)\t\tsin\'(x)\n");
    fprintf(pFile, "f(x)=(1+x)*e^x\n");
    fprintf(pFile, "\tx\t\t\tf(x)\t\t\tf'(x)_a\t\tf'(x)_r\t\tf''(x)_a\t\tf''(x)_r\n");
    x = a;
    while (x < b)
    {
        // y=sin(x);
        //printf("%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,sin(x), cos(x),(sin(x+delta_x)-sin(x))/delta_x);
        fprintf(pFile, "%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,(1+x)*exp(x), exp(x)+(1+x)*exp(x),(1+x+delta_x)*exp(x+delta_x)-((1+x)*exp(x))/delta_x,exp(x)*(3+x), exp(x+delta_x)*(3+x+delta_x)-exp(x)*(3+x)/delta_x);
        // printf(”%10.2f\t%10.2f\n”,x,y);
        x += delta_x; // x=x+delta_x;
    }
    fclose(pFile);
    return 0;
}