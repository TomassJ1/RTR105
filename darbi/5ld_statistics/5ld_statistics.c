#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i,k,max,max2;
    int n1=200,n2;
    char p;
    FILE *pFile;
    char * teikums;
    teikums = (char*) malloc ((n1) * sizeof(char));
    if (teikums==NULL) exit (1);
    for(i=0;i<=n1;i++) {teikums[i]=0;}

    printf("Programma sakārto ievadītā teikuma burtus un nosaka to statistiku. Līdz 200 simboliem.\n");
    printf("Burti ar mīkstinājuma zīmēm un garumzīmēm, interpunkcijas zīmes un atstarpes netiek ņemtas vērā.\n");
    printf("Ievadiet teikumu: ");
    fgets(teikums, n1, stdin);  
    printf("Teikums: ");
    puts(teikums);    
    

    for(i=0;i<=n1;i++)//nosaka kuri no simboliem ir burti
    {
        if(teikums[i]>=65 && teikums[i]<=90){}
        else
        {
            if(teikums[i]>=97 && teikums[i]<=122){}
            else {teikums[i]=0;}
        }
        
    }
    for(i=0,n2=0;i<=n1;i++)//nosaka cik simboli ir burti
    {
      if(teikums[i]!=0){n2++;}
    }
    n2--;
    char * burti; //izveido tik garu masīvu, cik burtu iepriekšējā masīvā
    burti = (char*) malloc ((n2) * sizeof(char));
    if (burti==NULL) exit (1);
    for(i=0;i<=n2;i++) {burti[i]=0;}

    for(i=0,k=0;i<=n1;i++)//pārraksta burtus jaunā masīvā
    {
        if(teikums[i]!=0)
        {
            burti[k]=teikums[i];
            k++;
        }
    }
    free(teikums);
    
    do //sakaārto burtus augošā secībā pēc ASCII skaitļiem
    {
        k=0;
        for(i=0;i<=(n2-1);i++)
        {
            if(burti[i]>burti[i+1])
            {
                p=burti[i];
                burti[i]=burti[i+1];
                burti[i+1]=p;
                k++;
            }
        }
    }
    while(k>0);

    printf("\t\t\t||  ASCII simbols  |  ASCII skaitlis  |\n");
    printf("________________________||_________________|__________________|\n");
    printf("Minimālā vērtība\t||\t%c\t   |\t%i\t      |\n",burti[0],burti[0]);
    printf("Maksimālā vērtība\t||\t%c\t   |\t%i\t      |\n",burti[n2],burti[n2]);
    for(i=0,k=0;i<=n2;i++) {k=k+burti[i];} k=k/(n2+1);
    printf("Vidējā vērtība\t\t||\t%c\t   |\t%i\t      |\n",k,k);
    if((n2+1)%2 == 0)//nosaka vai ir pāra vai nepāra burtu skaits
    {
        printf("Mediāna\t\t\t||\t%c\t   |\t%i\t      |\n",(burti[((n2+1)/2)-1]+burti[((n2+1)/2)])/2,(burti[((n2+1)/2)-1]+burti[((n2+1)/2)])/2);
    }
    else 
    {
        printf("Mediāna\t\t\t||\t%c\t   |\t%i\t      |\n",burti[((n2+1)/2)],burti[((n2+1)/2)]);
    }

    printf("_______________________________________________________________\n");
    //modas noteikšana
   for(i=0,max=0;i<=n2-1;i++)//nosaka maksimālo atkārtošanās skaitu
    {
       for(k=i+1,p=0;k<=n2;k++)
       {
            if(burti[i]==burti[k]){p++;}
       } 
       if(p>max){max=p;}
       
    }

    for(i=0,max2=0,p=0;i<=n2-1;i++)//pārbauda vai visi simboli neatkārtojas ar vienādu reižu skaitu
    {
       for(k=i+1,p=0;k<=n2;k++)
       {
            if(burti[i]==burti[k]){p++;}
       } 
       if(p!=max){max2++;}
       i=i+p;
    }
    if (max2==0){printf("Modas nav.\n");}
    else
    {
        printf("Moda: (ASCII simbols, ASCII skaitlis): ");
        for(i=0;i<=n2-1;i++)//izvada simbolus
        {
            for(k=i+1,p=0;k<=n2;k++)
            {
                if(burti[i]==burti[k]){p++;}
            } 
            if(p==max){printf("%c, %i  ",burti[i],burti[i]);}
       
        }   
    }
    printf("\nSakārtota ASCII sinbolu rinda: ");
    for(i=0;i<=n2;i++) {printf("%c, ",burti[i]);}
    printf("\nSakārtota ASCII skaitļu rinda: ");
    for(i=0;i<=n2;i++) {printf("%i, ",burti[i]);}
    printf("\n");

    pFile = fopen("statistics.dat", "w");
    for(i=0,max2=0,p=0;i<=n2-1;i++)
        {
        for(k=i+1,p=0;k<=n2;k++)
        {
            if(burti[i]==burti[k]){p++;}
        } 
        fprintf(pFile, "%c\t%i\n",burti[i],p+1);
        i=i+p;
    }
    pFile = fopen("statistics.dat", "w");
     
    fclose(pFile);
    free(burti);
    return 0;

}