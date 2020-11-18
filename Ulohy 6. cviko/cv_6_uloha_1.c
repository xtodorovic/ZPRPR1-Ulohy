// Miroslav Todorovic - Cvicenie 6 - Uloha 1
// Cviciaci : Igor Stupavský

#include <stdio.h>

int parne(int x[], int pocetx, int y[]) // Funkcia otestuje ci su cisla z pola X parne a zapise parne do pola Y
{
	int i, pocet_y=0;
	for(i=0; i<pocetx; i++)
	{
		if(x[i] % 2 == 0) 
		{
			y[pocet_y] = x[i];
			pocet_y++;	
		}
	}
	return pocet_y;
}


void vypisPola(int pole[], int pocet) //Funkcia vypise pole cisel
{
	int i;
	
	putchar('{');
	for(i=0; i<pocet; i++)
	{
		if(i+1 != pocet)
		{
			printf("%d, ", pole[i]);
		}
		else
		{
			printf("%d}\n",pole[i]);
		}
	}
}

int main()
{
	int x[10] = {1, 2, 3, 4, 5, 10, 9, 8, 7, 6};
	int y[10];
	int pocetx=10, pocety=0;
	
	printf("x: ");
	vypisPola(x, pocetx); //Program najprv zapise pole x
	
	pocety = parne(x, pocetx, y); //Potom zavola funkciu ktora vrati pocet cisel v poli Y, a zapise do pola Y parne
	
	printf("Pocet y: %d\ny: ", pocety); 

	vypisPola(y, pocety); //Na konci sa vypise pole y
	
	return 0;
}
