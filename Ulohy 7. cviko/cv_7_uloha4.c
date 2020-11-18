// Miroslav Todorovic - Cvicenie 7 - Uloha 4

#include <stdio.h>

void prehod(int *a, int *b)
{
	int pom;
		pom = *a;
		*a = *b;
		*b = pom;	
}

int main()
{
	int a, b;
	int s;
	
	printf("Zadaj hodnotu premennej a: "); 
	scanf("%d", &a);
	
	printf("Zadaj hodnotu premennej b: ");
	scanf("%d", &b);
	
	prehod(&a, &b); //Do funkcie posleme adresu premmenych aby sme zmeneli ich hodnoty
	
	printf("Hodnota a: %d, b: %d\n", a, b);
	
	return 0;
}
