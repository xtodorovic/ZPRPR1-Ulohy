// Miroslav Todorovic - Uloha 1

#include <stdio.h>

int main()
{
	float fahrenhait, celsius;	//program pouzije 2 premenne, vstupna je fahrenhait a celsius vystupna
	
	printf("Zadajte pocet stupnov Farenhaita: "); //Vypise spravu ze ocakava vstup
	
	scanf("%f", &fahrenhait);					//Nacita vstup
	
	celsius = ((fahrenhait - 32)*(5)/9);			// Urobi sa vypocet a prida sa do premenne celsius
	
	printf("\n%f Fahrenhaita je %f Celsius", fahrenhait, celsius); //Tento riadok vypise spravu 
	
//	printf("\n%f Fahrenhaita je %f Celsius", fahrenhait, ((fahrenhait - 32)*(5)/9)); //Toto vypise to iste ale program by pouzil iba jednu premennu
	return 0;
}
