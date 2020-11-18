// Miroslav Todorovic - Uloha 2

#include <stdio.h>

int main()
{
	float palec, vzdialenost, m, obvod_kolesa, pocet_otacok;
	const float pi = 3.14;
	
	printf("Zadajte priemer kolesa v palcoch: ");
	scanf("%f", &palec); 
	printf("Zadajte vzdialenost v km: ");
	scanf("%f", &vzdialenost);
	vzdialenost = vzdialenost * 1000; // transformuje kilometre na metre 
	m = (palec  * 2.54 / 2) / 100 ;   // vypocita v cm a transformuje na metre
	obvod_kolesa = m * pi;			// vypocita obvod kolesa
	pocet_otacok = (obvod_kolesa * vzdialenost); //na konci vypocita pocet otacok
	printf("Koleso sa na ceste otoci %f krat.", pocet_otacok);//Vypise spravu, neviem preco vypisuje ine cislo ako bolo na ukazke
	
	return 0;
}
