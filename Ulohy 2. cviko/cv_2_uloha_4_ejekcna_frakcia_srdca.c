// Miroslav Todorovic - Cvicenie 2 - Uloha 4

#include <stdio.h>

int main()
{
	float Ef, O1, O2;
	
	printf("Vlozte objem krvi v lavej srdcovej komore pred kontrakciou srdcoveho svalu: ");
	scanf("%f", &O1);
	
	printf("Vlozte objem krvi v lavej srdcovej komore po kontrakcii srdcoveho svalu: ");
	scanf("%f", &O2);
	
	Ef = (( O1 - O2 ) / O1) * 100 ;
	
	printf("Ejekcna frakcia srdca je %.0f %%\n", Ef);
	if( Ef>= 55 && Ef <= 75)
	{
		printf("Vase srdce pracuje spravne.");
	}
	else
	{
		printf("Vase srdce nepracuje spravne.");
	}
	
	return 0;
}
