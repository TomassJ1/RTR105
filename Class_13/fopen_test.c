#include <stdio.h>
#include <stdlib.h>

int main(void)
{
FILE * pFile;
pFile = fopen ("/myfile.txt","w");
//uzdevums - faila nosaukumu noskaidrot no lietotāja(adrese un fails)
if  (pFile!=NULL)
{
	fputs("test text output to file\n",pFile);
	fclose (pFile);	
}
else
{
	printf ("fopen example, file wasn't open\n");
	exit(1);
}
return 0;
}
