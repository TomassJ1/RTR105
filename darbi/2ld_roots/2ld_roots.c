#include <stdio.h>
#include <math.h>

float modified_exp(float x, float A){
    return (1+x)*exp(x)-A;
}

int main()
{
    float a, x, delta_x, b, y, A;
    int iteracijas=0;
    printf("Funkcijas f(x)=(1+x)*e^(x)-A vienas saknes aprēķināšana intervālā [a;b]\n");
    printf("Cien. liet., lūdzu, ievadi vienādojuma 'A' vērtību: ");
    scanf("%f",&A);
    printf("Cien. liet., lūdzu, ievadi intervāla 'a' vērību: ");
    scanf("%f",&a);
    printf("Cien. liet., lūdzu, ievadi intervāla 'b' vērību: ");
    scanf("%f",&b);
    printf("Cien. liet., lūdzu, ievadi precizitāti: ");
    scanf("%f",&delta_x);
    if (modified_exp(a,A)*modified_exp(b,A)>0)
    {
        printf("Funkcijai (1+x)*e^(x)=%0.2f norādītajā intervālā [%.2f;%.2f] nav sakņu vai ir pāra sakņu skaits.\n",A,a,b);
    }
    else
    {
        while((b-a)>delta_x)
        {
          iteracijas++;
          x=(a+b)/2;
          if (modified_exp(a,A)*modified_exp(x,A)>0)
          {
               a=x;
          }
          else
          {
              b=x;
           }
        }
        printf("\nVienādojuma f(x)=(1+x)*e^(x)-%.2f\n",A);
        printf("sakne x =  %f\n", x);
        printf("f(%f)=%f\n",x,modified_exp(x,A));
        printf("Saknes aprēķināšanai nepieciešamais iterāciju skaits: %i\n",iteracijas);

        FILE *pFile;
        pFile = fopen("2ld.txt", "w");
        fprintf(pFile, "# x\ty\n");
        fprintf(pFile, "%f\t%f",x,modified_exp(x,A));
        fclose (pFile);
    }
    return 0;
}