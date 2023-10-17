#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 10
int main (void)
{

int gadiijuma_skaitlis, gadiijuma_skaitlju_generatora_grauds;

gadiijuma_skaitlju_generatora_grauds = time(NULL);
printf("Gadījuma skaitļu ģeneratora grauds - %d\n",gadiijuma_skaitlju_generatora_grauds);


srand(gadiijuma_skaitlju_generatora_grauds);
int i;
i = 1 + 1; //operācijas netiek pildītas vienalicīgi
           //šeit ir divas operācijas (saskaitīšana - + un piešķiršana - =)
           //saskaitīšana ir prioritāra - tā tiks izpildīta pirmā
           //i++; ikrements (skaitļa pieaugums par vienu vienību
           //++i;
           //i += 1;



gadiijuma_skaitlis = rand();

while(gadiijuma_skaitlis % 10)
{
printf("Gadījuma skaitlis - %d\n", gadiijuma_skaitlis);
printf("%d. skaitlis\n",i);
printf("Šis skaitlis nedalās ar 10 bez atlikuma.");
gadiijuma_skaitlis = rand();
i++;
} 
printf("Ģenerēšanas beigas\n");
printf("Beidzot skaitlis %d. iterācijā %d  dalās ar 10 bez atlikuma.\n",i,gadiijuma_skaitlis);






return 0;
}
