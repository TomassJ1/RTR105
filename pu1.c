#include <stdio.h>

int main(void)
{
    unsigned long int pirmais_skaitlis;
    unsigned long int otrais_skaitlis;
    unsigned long long int rezultats;

    printf ("Ievadiet pirmo skaitli: ");
    scanf ("%lu",&pirmais_skaitlis);
    printf ("Ievadiet otro skaitli: ");
    scanf ("%lu",&otrais_skaitlis);

    rezultats = pirmais_skaitlis * otrais_skaitlis;
    printf ("%lu * %lu = %llu\n",pirmais_skaitlis,otrais_skaitlis,rezultats);
    
    return 0;
}
