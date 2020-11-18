// Miroslav Todorovic - Uloha 5

#include <stdio.h>

int main()
{
	int den_narodenia, mesiac_narodenia, rok_narodenia;
	int den, mesiac, rok;
	int pocet_dni = 0;
	
	printf("Zadajte datum narodenia v tvare DD MM RRRR: ");
	scanf("%d %d %d", &den_narodenia, &mesiac_narodenia, &rok_narodenia); // vstup - datum narodenia
	
	printf("Zadajte dnesny datum v tvare DD MM RRRR: "); // vstup - dnesny datum
	scanf("%d %d %d", &den, &mesiac, &rok);
	
	if( den_narodenia > den) // skontroluje dni
	{
		pocet_dni += 30 - den_narodenia + den;
		mesiac--;
	}
	else
	{
		pocet_dni += den - den_narodenia;
	}
	
	if(mesiac_narodenia > mesiac)// skontroluje mesiace
	{
		pocet_dni += (12 - mesiac_narodenia + mesiac) * 30;
		rok--;
	}
	else
	{
		pocet_dni += (mesiac - mesiac_narodenia) * 30;
	}
	
	pocet_dni += ((rok - rok_narodenia) * 365); 
	
	printf("Od narodenia uplynulo priblizne %d dni.", pocet_dni);
	return 0;
}
