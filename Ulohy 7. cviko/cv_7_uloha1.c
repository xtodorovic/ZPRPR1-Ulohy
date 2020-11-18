// Miroslav Todorovic - Cvicenie 7 - Uloha 1

#include <stdio.h>

void sucet(int cislo1, int cislo2, int *s) // Hodnoty cisla 1, a 2 nemenime tak nepotrebuju ukazovatel 
{
	*s = cislo1 + cislo2;
}

int main()
{
	int cislo1, cislo2;
	int s;
	
	printf("Zadaj dve cisla oddelene medzerou: ");
	scanf("%d %d", &cislo1, &cislo2);
	
	sucet(cislo1, cislo2, &s); //Ak chceme zmenit hodnotu nejakej premenne, musime ju odoslat do funkcie s adresou, cize musi byt: "funkcia(&premenna);"
	
	printf("Sucet cisel je: %d\n", s);
	
	return 0;
}
