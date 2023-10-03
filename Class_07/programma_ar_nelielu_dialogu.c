#include <stdio.h>

int main (void)

{
char vards [30];
int vecums;
int gads;

printf ("Jūsu vards? ");
scanf ("%29s", vards);
printf ("Jūsu vecums? ");
scanf ("%d",&vecums);
gads=2023-vecums;
printf ("Jūsu vārds ir %s un Jūs esat dzimis %d gadā. \n", vards, gads);



return 0;
}


