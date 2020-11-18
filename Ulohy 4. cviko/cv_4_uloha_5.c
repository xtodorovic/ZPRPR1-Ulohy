// Miroslav Todorovic - Cvicenie 4 - uloha 5
// Cviciaci: J.Hanák

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int faktorial(int a) //Funkcia na vypocet faktorialu
{
	int i, vysledok=1;
	for(i=a; i>1; i--)
	{
		vysledok *=i;
	}
	return vysledok;
}

int main()
{
	FILE *fp_cinitele, *fp_vysledky;
	char ch;
	int i, count, cislo1, cislo2, sucin;
	
	fp_cinitele=fopen("cinitele.txt","r");//subor 1
	fp_vysledky=fopen("vysledky.txt", "w");//subor 2
	
	if( fp_cinitele == NULL || fp_vysledky == NULL ) //Program otestuje ak sa spravne otvoril subor
	{
		printf("Nepodarilo sa nacitat subor.\n");
		return 1;
	}
	
	while((ch=getc(fp_cinitele)) != EOF) //Tento cyklus vypocita kolko mame riadkov v subore
	{ 
		if(ch == '\n')
		{
			count++; 
		}
		ch++;
	}
	rewind(fp_cinitele); //Nastavi pointer na zaciatok suboru

	for(i=1; i<count ;i++)
	{
		fscanf(fp_cinitele, "%d %d\n", &cislo1, &cislo2);//Nacita 2 cisla zo suboru
		sucin = cislo1 * cislo2; //Vypocet sucinu
		fprintf(fp_vysledky, "%d * %d = %d F:", cislo1, cislo2, sucin); //Vypise 2 cisla a ich sucin
		if(sucin > 11) //faktorial mozeme vypisat iba ak je sucin mensi od 11  
		{
			fprintf(fp_vysledky,"###\n"); 
		}
		else
		{
			fprintf(fp_vysledky,"%d\n",faktorial(sucin));
		}
	}
	
	if(fclose(fp_cinitele)==EOF && fclose(fp_vysledky)==EOF) //Program otestuje ak sa spravne zatvoril subor
	{
		printf("Nepodarilo sa zatvorit subor.\n");
	}
	
	return 0;
}
