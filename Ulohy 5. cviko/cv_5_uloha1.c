// Miroslav Todorovic - Cvicenie 5 - Uloha 1
// Cviciaci: Igor Stupavský
#include <stdio.h>
#include <stdlib.h>

void funkcia(double *s, double a, double b)
{
	*s = a / b ;
}

int main()
{
	double T_seq, T_par;
	double S=0;
	
	printf("Vlozte cas spracovania sekvencneho programu(v milisekundach): ");
	scanf("%lf", &T_seq);
	
	printf("Vlozte cas spracovania sekvencneho programu(v milisekundach): ");
	scanf("%lf", &T_par);
	
	funkcia(&S, T_seq, T_par);
	printf("Koeficient zvysenia vykonnosti sekvencneho programu po paralelizacii: %.1lf.", S);
	
	return 0;
}

