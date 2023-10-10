#include <stdio.h>

int main(void)
{
char c1; //šī ir diskrēta mainīgā deklarēšana - noteikta izmēra atmiņas 
	 //apgabals (char ->1 byte) tiks sasaistīts ar noteiktu identifikatoru (c1)
	 //atniņā nav vakuums => šajā rezervētajā atmiņas apgabalā būs kaut kāda
	 //0 un 1 kombinācija, kas palikusi pēc kādas iepriekšējās programmas
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (simbols): %c\n", c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (dec): %d\n", c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (hex): %#x\n", c1);
printf("c1 mainīgā vērtība uzreiz pēc deklarēšanas (oct): %#o\n", c1);
printf("\n");
	//mainīgā "loma" ir - mainīties ...
c1=0125; //visbiežāk šo izmaiņu veiksim ar NB! piešķiršanas operāciju - =
	//piešķiršanas operācijai ir gandrīz viszemākā prioritāte
	//(tā tiek izpildīta viena no pēdējām)
	//labajā pusē izreķinātais lielums (vērtība) tiek izmitināta
	//atmiņas apgabalā, kas ir sasaistīts ar kreisajā pusē pieminēto
	//identifikatoru
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (simbols): %c\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (dec): %d\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (hex): %#x\n", c1);
printf("c1 mainīgā vērtība pēc piešķiršanas operācijas (oct): %#o\n", c1);
 
int birth_year = 2000; //šī ir mainīgā definēšana (atmiņas apgabala sasaistīšana
	 	       //ar identifikatoru vērtības piešķiršana) mainīgajiem
		       //identifikatoriem, jeb vārdiem vēlams izvēlēties mnemoniskos
		       //nosaukumus - nosaukuma vārds vai teksts atspoguļo nolūku,
		       //kuram šis mainīgais ir paredzēts
		       //identifikators nevar sākties ar ciparu, saturēt atstarpi
		       //var saturēt - (A...Za...z][0...9][_]
printf("\n");
printf("birth_year mainīgā vērtība (simbols): %c\n", birth_year);
printf("birth_year mainīgā vērtība (dec): %d\n", birth_year);
printf("birth_year mainīgā vērtība (hex): %#x\n", birth_year);
printf("birth_year mainīgā vērtība (oct): %#o\n", birth_year);

int i1, i2 = 0, i3 = 0x13, i4 = 025;

int modified_birth_year = birth_year >> 4;

printf("\n");
printf("modified birth_year mainīgā vērtība (simbols): %c\n", modified_birth_year);
printf("modified birth_year mainīgā vērtība (dec): %d\n", modified_birth_year);
printf("modified birth_year mainīgā vērtība (hex): %#x\n", modified_birth_year);
printf("modified birth_year mainīgā vērtība (oct): %#o\n", modified_birth_year);

//uzdevums līdz 10:45 papētīt citus datu tipus un operācijas no:
//https://www.geeksforgeeks.org/data-types-in-c/
//https://en.cppreference.com/w/c/language/operator_precedence

char c = 10,cc = 127; // cc = 128;
int i = -4569, ii = 126 ;
float f = 3.e-16, ff = 0.2569;
double d = 4.789e39, dd = -13.56;

printf("c=%d\t\t (piešķietās atmiņas izmērs baitos) - %ld,\n ",c,sizeof(c));
printf("\t\t atrašanās vieta atmiņā - %p\n",&c);
printf("i=%d\t\t (piešķietās atmiņas izmērs baitos) - %ld,\n ",i,sizeof(i));
printf("\t\t atrašanās vieta atmiņā - %p\n",&i);
printf("f=%.2e\t (piešķietās atmiņas izmērs baitos) - %ld,\n ",f,sizeof(f));
printf("\t\t atrašanās vieta atmiņā - %p\n",&f);
printf("d=%.3e\t (piešķietās atmiņas izmērs baitos) - %ld,\n ",d,sizeof(d));
printf("\t\t atrašanās vieta atmiņā - %p\n",&d);

printf("\n");
int *i_adrese = &i;
printf("i mainīgā adrese - %p\n",i_adrese);
int *i_adreses_kopija = i_adrese;
printf("i adreses kopija - %p\n",i_adreses_kopija);
printf("i mainīgā vērtība, izgūta pielietojot tā adresi - %d\n", *i_adrese);
printf("i mainīgā vērtība, izgūta pielietojot tā adreses kopiju - %d\n", *i_adreses_kopija);

int **i_adreses_adrese = &i_adrese;
printf("i adreses adrese - %p\n",i_adreses_adrese);
printf("i adreses adreses izmērs baitos - %ld\n",sizeof(i_adreses_adrese));

printf("\n/ operācijas pētīšana:\n");
printf("char/char = ? - ");
printf("%d / %d = %d (rezultāta izmērs baitos - %ld)\n",cc,c,cc/c,sizeof(cc/c));


return 0;

}
