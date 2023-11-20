#include<stdio.h>
int parkartosana (char *burts1, char *burts2);
int main(void)
{
    char pirmais_burts, otrais_burts, tresais_burts,a;
    char kartosanas_seciba, k=1;


    printf("Programma sakārto trīs burtus aplfabēta vai pretējā secībā.\n\n");

    printf("Pirmais burts: ");
    scanf(" %c",&pirmais_burts);
    printf("Otrais burts: ");
    scanf(" %c",&otrais_burts);
    printf("Trešais burts : ");
    scanf(" %c",&tresais_burts);

    printf("Izvēlieties kārtošanas secību\nAlfabēta - 1\nPretēji - 2\n");
    scanf(" %hhi", &kartosanas_seciba);

    if (kartosanas_seciba == 2)
    {
        while (k>0) //pretējā secībā
        {
            k=0;
            if (pirmais_burts < otrais_burts)
            {
                parkartosana(&pirmais_burts, &otrais_burts);
                k++;
            }
            if (otrais_burts < tresais_burts)
            {
                parkartosana(&otrais_burts, &tresais_burts);
                k++;
            }
        }
    }


    if (kartosanas_seciba == 1)
    {
        while (k>0) //alfabēta secībā
        {
            k=0;
            if (pirmais_burts > otrais_burts)
            {
                parkartosana(&pirmais_burts, &otrais_burts);
                k++;
            }
            if (otrais_burts > tresais_burts)
            {
                parkartosana(&otrais_burts, &tresais_burts);
                k++;
            }
        }
    }

    printf("%c   %c   %c\n", pirmais_burts, otrais_burts, tresais_burts);
    return 0;
}

int parkartosana (char *burts1, char *burts2)
{
    char b;
    b = *burts1;
    *burts1 = *burts2;
    *burts2 = b;
}
