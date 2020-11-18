// Miroslav Todorovic - Cvicenie 4 - uloha 4
// Cviciaci: J.Hanák

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	FILE *fp_subor1, *fp_subor2;
	char ch;
	char buffer[100]; 
	int i, count;
	
	fp_subor1=fopen("subor1_uloha4.txt","r");
	fp_subor2=fopen("subor2_uloha4.txt", "w");
	
	if( fp_subor1 == NULL || fp_subor2 == NULL ) //Program otestuje ak sa spravne otvoril subor
	{
		printf("Nepodarilo sa nacitat subor.\n");
		return 1;
	}
	
	while((ch=getc(fp_subor1)) != EOF) //Tento cyklus vypocita kolko mame riadkov v subore
	{
		if(ch == '\n')
		{
			count++; 
		}
		ch++;
	}
	rewind(fp_subor1); //Nastavi pointer na zaciatok suboru

	for(i=1; i<count ;i++)
	{
		if( i%2 == 0) //Podmienka za kazdy druhy riadok
		{
			fgets(buffer, 100, fp_subor1); //Tato funkcia zoberie cely riadok
			fprintf(fp_subor2, "%s", buffer); //Tato zapise riadok do druheho suboru
		}
		else
		{
			fgets(buffer, 100, fp_subor1); //Tato funkcia zoberie cely riadok
		}
	}
	
	if(fclose(fp_subor1)==EOF && fclose(fp_subor2)==EOF) //Program otestuje ak sa spravne zatvoril subor
	{
		printf("Nepodarilo sa zatvorit subor.\n");
	}
	
	return 0;
}
