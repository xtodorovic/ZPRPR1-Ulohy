// Miroslav Todorovic - Cvicenie 5 - Uloha 2
// Cviciaci: Igor Stupavský
#include <stdio.h>
#include <math.h>

float priemernaSpotrebaPaliva(float *vysledok, float km, float L)
{
	float X = (L/km) *100;
	*vysledok += X;
}

int main()
{
	float prejdena_vzdialenost, spotrebovane_palivo;
	float vypocet_L_km=0;
	
	printf("Vlozte prejdenu vzdialenost automobilu: ");
	scanf("%f", &prejdena_vzdialenost);
	
	printf("Vlozte spotrebovane palivo: ");
	scanf("%f", &spotrebovane_palivo);		
	
	priemernaSpotrebaPaliva(&vypocet_L_km, prejdena_vzdialenost, spotrebovane_palivo);
	
	printf("Priemerna spotreba automobilu(v L/100 km) je: %.2lf...", vypocet_L_km);
	
	
	return 0;
}
