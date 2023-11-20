#include <stdio.h>

int delay(void);
int aizture(int laiks);
int skaitlis(void);
int reizinasana_ar_2 (int skaitlis);

int main(void) 
{
    delay();
    aizture(5000);
    printf("Funkcijas <<skaitlis>> rezultāts: %d\n",skaitlis());
    printf("Funkcijas <<reizinasana_ar_2>> rezultāts ar argumentu 4: %d\n", reizinasana_ar_2(4));
    return 0;
}

int delay(void) //bez argumentiem un bez return
{
    int j;
    for(j=0;j<1000;j++){}
}

int aizture(int laiks) //ar argumentiem un bez return
{
    int j;
    for(j=0;j<laiks;j++){}
}

int skaitlis(void) //bez argumentiem un ar return
{
    return 5;
}

int reizinasana_ar_2 (int skaitlis) //ar argumentiem un ar return
{
    return skaitlis*2;
}

