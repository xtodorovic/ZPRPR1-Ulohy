// Miroslav Todorovic - Cvicenie 3 - Uloha 1
// Cviciaci: J.Hanák
#include <stdio.h>

int main()
{
	char a, b; //Vstupne 2 pismenka
	
	scanf("%c %c", &a, &b); //Nacitame 2 pismenka na vstupe
	
	a = a - 'a' + 'A'; //Zmeni sa na velke pismeno
	b = b - 'a' + 'A'; //Zmeni sa na velke pismeno
	
	printf("%c %d\n%c %d\n", a, a, b, b); //Vypise spravu 
	
	return 0;
}
