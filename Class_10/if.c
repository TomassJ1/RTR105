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
gadiijuma_skaitlis = rand();

printf("Gadījuma skaitlis - %d\n", gadiijuma_skaitlis);

if (gadiijuma_skaitlis %10 ==0)//tā jūs rakstītu skolā un tas ir normāli
{
printf("Šis skaitlis dalās ar 10 bez atlikuma.\n");
}

if (gadiijuma_skaitlis %10) //tiek pārbaudīts vai šis skaitlis dalās ar 10 bez atlikuma 
//if (gadiijuma_skaitlis %10 ==0)//tā jūs rakstītu skolā un tas ir normāli
{
printf("Šis skaitlis nedalās ar 10 bez atlikuma.\n");
}
else //NB! else vienamēr pieder kādam if (if bez else var būt, else bez if - nevar)
{
printf("Šis skaitlis dalās ar 10 bez atlikuma.\n");
}

return 0;
}
