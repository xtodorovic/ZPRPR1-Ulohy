// Miroslav Todorovic - Cvicenie 6 - Uloha 4
// Cviciaci : Igor Stupavský

#include <stdio.h>
#include <stdlib.h>

void vstup(char *slovo, int n) //Funkcia pre vstup, ale zapisuje iba tolko pismen kolko sme zadali
{
	int i=0;
	char ch;
	
	for(i=0; i<n; i++)
	{
		scanf(" %c", slovo+i); //Pametame pismena pomocou scanf a pomocou ukazovatela
	}
}

void vypis(char *slovo, int n) //Funkcia vypise pole, ale v opacnom poradi
{
	int i;
	for(i=n-1; i >= 0; i--)
	{
		printf("%c", *(slovo+i)); //Vypisujeme pole od konca pomocou ukazovatela
	}
}

int main()
{
	char *slovo; //ukazovatel na pole slovo
	int n;

	scanf("%d", &n); //Nacitame pocet slov 
	slovo = malloc(n * sizeof(*slovo)); //Alokujeme pamet pre pole slovo na zaklade toho kolko smo zadali hodnotou n;
 
	vstup(slovo, n); //Zavolame funkciu ktora urobi vstup a zapameta do pola slovo
	vypis(slovo, n); //Vypiseme pole slovo, ale naopak
	
	free(slovo); 
	return 0;
}
