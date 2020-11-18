// Miroslav Todorovic - Cvicenie 7 - Uloha 3

#include <stdio.h>

void vynasob(int cislo1, int *cislo2, int *s)
{	
	printf("Zadaj 2. cele cislo: ");
	scanf("%d", cislo2); // cislo2 uz ma ukazovatel tak nemusime davat '&'. 
	//Ale ak cheme pouzit ukazovatel dame takto: scanf("%d", cislo2);
	*s = cislo1 * *cislo2; //musi byt oddelene medzerou 
}

void vysledok(int s)
{
	printf("Vysledok je: %d", s);
}

int main()
{
	int cislo1, cislo2;
	int s;
	
	printf("Zadaj 1. cele cislo: ");
	scanf("%d", &cislo1);
	
	vynasob(cislo1, &cislo2, &s);
	vysledok(s); 
	
	return 0;
}
