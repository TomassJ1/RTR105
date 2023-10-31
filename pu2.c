#include <stdio.h>

int main(void)
{
    int i;
    char dec_skaitlis;
    printf("Skaitļa pārveidošana no decimālās uz bināro skaitīšanas sistēmu.\n");
    printf("Ievadiet skaitli decimālajā sistēmā: ");
    scanf("%d",&dec_skaitlis);
    printf("\nDecimālās sistēmas skaitlis %d ir ",dec_skaitlis);

   
    for(i=7; i>=0; i--)
    {
        if((dec_skaitlis>>i) == (dec_skaitlis>>(i+1))*2)
        {
            printf("0");
        }
        else
        {
            printf("1");
        }
    }
    printf(" binārajā sistēmā.\n");
    return 0;
}
