// Miroslav Todorovic - Cvicenie 6 - Uloha 5
// Cviciaci : Igor Stupavský

#include <stdio.h>

void vypisAbecedu(void) //Funkcia vypise abecedu v jednom riadku
{
	char i;
	
	printf("  ");
	for(i='A'; i<='Z'; i++) 
	{
		printf("%c ", i); //Na vystupe dostaneme abecedu vo formate "  A B C D ....... X Y Z"
	}
	putchar('\n');
}

int histogram(FILE *fp) // Funkcia histogram nakresli histogram
{
	int i, riadok=1, pismena=0;
	char buffer[100];
	char j;
	
	vypisAbecedu(); //Zavolame najprv funkciu aby vypisala abecedu 
	
	while(!feof(fp)) //Nacitava riadky do konca suboru
	{
		printf("%d ",riadok); //Vypise cislo riadku
		fgets(buffer, 100, fp); //Nacita riadok zo suboru
		
		for(j='A'; j<='Z'; j++) //Zaciname hladat od pismena 'A' do pismena 'Z'
		{
			for(i=0; buffer[i] != '\0'; i++) //Najprv ideme na zaciatok riadku
			{
				if(((buffer[i]-'a'+'A') == j) || (buffer[i] == j)) //Testuje ci sa pismeno z prveho cykla nachadza v riadku
				{
					pismena++; //ak najde pismeno, zvacsi pocet najdenych pismen
				}
			}
			printf("%d ",pismena); //Vypise hodnotu 
			pismena = 0;			//Zmeni na 0, a zacne hladat ine pismeno
		}
		putchar('\n');
		riadok++; //Pocet riadkov sa zvacsi
	}
}


int main()
{
	FILE *fp; 
	char subor[40]; //Premena pre nazov suboru
	
	scanf("%s", subor); //Nacitame nazov suboru, ocakavame format: "subor.txt"

	fp = fopen(subor, "r"); //Otvorime subor
	
	if(fp == NULL) //Otestujeme ci sa subor otvoril
	{
		printf("Subor sa nepodarilo otvorit.");
		return 0;
	}
	
	histogram(fp); //Zavolame funkciu ktora nakresli histogram
	
	if(fclose(fp) == EOF) //Otestujeme ci sa subor zatvoril
	{
		printf("Subor sa nepodarilo zatvorit.");
		return 0;
	}
		
	return 0;
}
