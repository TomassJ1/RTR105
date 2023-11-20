#include <stdio.h>

int main (void)
{

    char datu_tips;
    printf("Programma izrēķina skaitļa faktoriālu\n");
    printf("Izvēlieties datu tipu :\n");
    printf("char - 1\nint - 2\nlong long - 3\n");
    scanf("%hhi", &datu_tips);

    if (datu_tips == 1)//char datu tips
    {
    char skaitlis, faktorials=1, faktorials2, skaitlis2;
    printf("Ievadiet skaitli ");
    scanf("%hhi", &skaitlis);
   
    skaitlis2=skaitlis;
    while (skaitlis2 > 0)
    {
        faktorials2=faktorials;
        faktorials=faktorials*skaitlis2;
        if (faktorials2 != faktorials/skaitlis2){skaitlis2=-1;}
        skaitlis2--;
    }
    if (skaitlis2<0)
    {
        printf("Skaitļa %d faktoriālu nevar aprēķināt ar char datu tipu!\n", skaitlis);
    }
    else 
    {
        printf("Atbilde: %d! = %d\n", skaitlis, faktorials);
    }
    }
    if (datu_tips == 2)//int datu tips
    {
    int skaitlis, faktorials=1, faktorials2, skaitlis2;
    printf("Ievadiet skaitli ");
    scanf("%i", &skaitlis);
    skaitlis2=skaitlis;
    while (skaitlis2 > 0)
    {
        faktorials2=faktorials;
        faktorials=faktorials*skaitlis2;
        if (faktorials2 != faktorials/skaitlis2){skaitlis2=-1;}
        skaitlis2--;
    }
    if (skaitlis2<0)
    {
        printf("Skaitļa %d faktoriālu nevar aprēķināt ar int datu tipu!\n", skaitlis);
    }
    else 
    {
        printf("Atbilde: %d! = %d\n", skaitlis, faktorials);
    }
    }
    if (datu_tips == 3)//long long datu tips
    {
    long long skaitlis, faktorials=1, faktorials2, skaitlis2;
    printf("Ievadiet skaitli ");
    scanf("%lli", &skaitlis);
    skaitlis2=skaitlis;
    while (skaitlis2 > 0)
    {
        faktorials2=faktorials;
        faktorials=faktorials*skaitlis2;
        if (faktorials2 != faktorials/skaitlis2){skaitlis2=-1;}
        skaitlis2--;
    }
    if (skaitlis2<0)
    {
        printf("Skaitļa %lld faktoriālu nevar aprēķināt ar long long datu tipu!\n", skaitlis);
    }
    else {
        printf("Atbilde: %lld! = %lld\n", skaitlis, faktorials);
    }
    }
 
    return 0;
}