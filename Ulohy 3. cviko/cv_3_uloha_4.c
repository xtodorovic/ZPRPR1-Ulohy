// Miroslav Todorovic - Cvicenie 3 - Uloha 4
// Cviciaci: J.Hanák
#include <stdio.h>

int main()
{
	double a;
	int obycajne, spravne;
	
	scanf("%lf", &a);//Vstup typu double
	
	obycajne = a; //Toto pretipuje aj npr 5.99 na 5
	spravne = a + 0.5;//Ak mame cislo 5.49 stale je to blizsie k 5, ak pripocitame 0.5 dostaneme 5.99 ale to stale bude 5. Ale ak npr mame 5.51, dostaneme spravne pretypovanie 6

	printf("Obycajne pretypovanie: %d\n", obycajne); 
	printf("Matematicky spravne pretypovanie: %d\n", spravne);
	
	return 0;
}
