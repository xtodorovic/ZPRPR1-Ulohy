// Miroslav Todorovic - Cvicenie 2 - Uloha 3

#include <stdio.h>

int main()
{
	int vstupne_cislo;
	
	printf("Vlozte cele cislo: ");
	scanf("%d", &vstupne_cislo);
	
	if(vstupne_cislo % 2 == 0 && vstupne_cislo != 0)
	{
		printf("Cislo je parne.");
	}
	else if(vstupne_cislo % 3 == 0 && vstupne_cislo != 0)
	{
		printf("Cislo je neparne.");
	}
	else
	{
		printf("Chyba na vstupe, zadajte cele cislo.");
	}
	
	return 0;
}
