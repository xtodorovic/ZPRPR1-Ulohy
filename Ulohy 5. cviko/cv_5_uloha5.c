// Miroslav Todorovic - Cvicenie 5 - Uloha 5
// Cviciaci: Igor Stupavský
#include <stdio.h>
#include <stdlib.h>
#define MIN 20 //Minimalny pocet hospitalizacii
#define MAX 100 //Maximalny pocet hospitalizacii

int pocet_hospitalizacii[12];


void vypisMesiac(int mesiac);

void generovaniePoctuHospitalizacii(void)//Tato funkcia generuje random cisla za kazdy mesiac
{
	time_t cas;
	int i;
	srand((unsigned) time(&cas));
	for(i=0; i<12; i++)
	{
		pocet_hospitalizacii[i] = (MIN + rand() % (MAX + 1 - MIN) );
		vypisMesiac(i+1);
		printf(" %d\n",pocet_hospitalizacii[i]);
	}
	putchar('\n');
}

int priemernyPocet(void) 
{
	int priemer = 0, i;
	
	for(i=0; i<12 ; i++)
	{
		priemer += pocet_hospitalizacii[i];
	}
	
	return priemer/12;
}



void mesiacNajmensiPocet()
{
	int min = pocet_hospitalizacii[0];
	int i, pom=0;
	
	for(i=1; i<12; i++)
	{
		if(min > pocet_hospitalizacii[i])
		{
			min = pocet_hospitalizacii[i];
			pom = i;
		}
	}
	vypisMesiac(pom+1);
	printf(" s poctom: %d\n", min);
}

void mesiacNajvacsiPocet()
{
	int max = pocet_hospitalizacii[0];
	int i, pom=0;
	
	for(i=1; i<12; i++)
	{
		if(max < pocet_hospitalizacii[i])
		{
			max = pocet_hospitalizacii[i];
			pom = i;
		}
	}
	vypisMesiac(pom+1);
	printf(" s poctom: %d\n", max);
}

void kvartalNajmensiPocet(void)
{
	int kvartal[4];
	int min=0, pom=0;
	int i, n, j=0;
	
	kvartal[0] = 0;
	for(i=0; i<12; i++)
	{
		
		if((i+1)%3 == 0) //mame 4 kvartaly a oddelime ich, za kazdy kvartal sa vypocita hodnota
		{
			kvartal[j] += pocet_hospitalizacii[i];
			j++;	
			kvartal[j] = 0;
		}
		else
		{
			kvartal[j] += pocet_hospitalizacii[i];
		}
	}

	min = kvartal[0];
	for(i=1; i<4; i++)
	{
		if(min > kvartal[i]) //Najdeme kvartal s najmensim poctom hospitalizacii
		{
			min = kvartal[i];
			pom = i;
		}
	}
	n = pom+1;
	for(i=(pom*3); i<n*3; i++) // Vypise kvartal s minimalnym poctom hospitalizacii
	{
		vypisMesiac(i+1);
		putchar(' ');
	}
	printf("s celkovym poctom: %d\n", min);
}

void kvartalNajvacsiPocet(void)
{
	int kvartal[4];
	int max=0, pom=0;
	int i, n, j=0;
	
	kvartal[0] = 0;
	for(i=0; i<12; i++)
	{
		if((i+1)%3 == 0) 
		{
			kvartal[j] += pocet_hospitalizacii[i];
			j++;	
			kvartal[j] = 0;
			
		}
		else
		{
			kvartal[j] += pocet_hospitalizacii[i];
		}
	}

	max = kvartal[0];
	for(i=1; i<4; i++)
	{
		if(max < kvartal[i])
		{
			max = kvartal[i];
			pom = i;
		}
	}
	n = pom+1;
	for(i=(pom*3); i<n*3; i++)
	{
		vypisMesiac(i+1);
		putchar(' ');
	}
	printf("s celkovym poctom: %d\n", max);
}

void vypisMesiac(int mesiac) //Funkcia na vypis mesiacov
{
	switch(mesiac)
	{
		case 1: printf("Januar"); break;
		case 2: printf("Februar"); break;
		case 3: printf("Marec"); break;
		case 4: printf("April"); break;
		case 5: printf("Maj"); break;
		case 6: printf("Jun"); break;
		case 7: printf("Jul"); break;
		case 8: printf("August"); break;
		case 9: printf("September"); break;
		case 10: printf("Oktober"); break;
		case 11: printf("November"); break;
		case 12: printf("December"); break;
		default: printf("Chyba."); break;
	}
}

int main()
{
	
	generovaniePoctuHospitalizacii();
	
	printf("Priemerny pocet hospitalizovanych pacientov je: %d\n",priemernyPocet());
	printf("Mesiac s najmensim poctom hospitalizacii je: ");
	mesiacNajmensiPocet();
	printf("Mesiac s najvacsim poctom hospitalizacii je: ");
	mesiacNajvacsiPocet();
	printf("Kvartal s najmensim poctom hospitalizacii je: ");
	kvartalNajmensiPocet();
	printf("Kvartal s najvacsim poctom hospitalizacii je: ");
	kvartalNajvacsiPocet();
	
	return 0;
}
