// Miroslav Todorovic - Cvicenie 3 - Uloha 3
// Cviciaci: J.Hanák
#include <stdio.h>

int main()
{
	int vstup_cislo;
	int i, faktorial=1;
	
	scanf("%d", &vstup_cislo);  //Vstup celeho cisla
	
	for(i=vstup_cislo; i>0; i--) //Jednoduchi vypocet faktoriala
	{
		faktorial *= i ;
	}
	
	printf("%d\n", faktorial); //Vypise spravu 
	
	return 0;
}
