#include<stdio.h>
int parkartosana (int *skaitlis1, int *skaitlis2);
int main(void)
{
    int pirmais_skaitlis, otrais_skaitlis, tresais_skaitlis,a;
    int kartosanas_seciba, k=1;


    printf("Programma sakārto trīs skaitļus dilstošā vai augošā secībā.\n\n");

    printf("Pirmais skaitlis: ");
    scanf("%d",&pirmais_skaitlis);
    printf("Otrais skaitlis: ");
    scanf("%d",&otrais_skaitlis);
    printf("Trešais skaitlis : ");
    scanf("%d",&tresais_skaitlis);

    printf("Izvēlieties kārtošanas secību\nDilstošā - 1\nAugošā - 2\n");
    scanf("%i", &kartosanas_seciba);

    if (kartosanas_seciba == 1)
    {
        while (k>0) //dilstošā secībā
        {
            k=0;
        if (pirmais_skaitlis < otrais_skaitlis)
        {
            parkartosana(&pirmais_skaitlis, &otrais_skaitlis);
            k++;
        }
        if (otrais_skaitlis < tresais_skaitlis)
        {
            parkartosana(&otrais_skaitlis, &tresais_skaitlis);
            k++;
        }
        }
    }


    if (kartosanas_seciba == 2)
    {
        while (k>0) //augošā secībā
        {
            k=0;
            if (pirmais_skaitlis > otrais_skaitlis)
            {
                parkartosana(&pirmais_skaitlis, &otrais_skaitlis);
                k++;
            }
            if (otrais_skaitlis > tresais_skaitlis)
            {
                parkartosana(&otrais_skaitlis, &tresais_skaitlis);
                k++;
            }
        }
    }

    printf("%d   %d   %d\n", pirmais_skaitlis, otrais_skaitlis, tresais_skaitlis);
    return 0;
}

int parkartosana (int *skaitlis1, int *skaitlis2)
{
    int b;
    b = *skaitlis1;
    *skaitlis1 = *skaitlis2;
    *skaitlis2 = b;
}
