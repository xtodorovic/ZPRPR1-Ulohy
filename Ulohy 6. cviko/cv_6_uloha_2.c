// Miroslav Todorovic - Cvicenie 6 - Uloha 2
// Cviciaci : Igor Stupavský

#include <stdio.h>

int nasobky(int x[], int pocetx, int y[], int k) // Funkcia otestuje ci existuju nasobky cisla k a zapise tie cisla do pola Y
{
	int i, pocet_y=0;
	for(i=0; i<pocetx; i++)
	{
		if(k >= 0 && x[i] % k == 0)
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
	int x[10] = {4, 7, 10, 1, 3, 9, 2, 5, 8, 6};
	int y[10];
	int pocetx=10, pocety=0;
	
	printf("x: ");
	vypisPola(x, pocetx); //Program najprv zapise pole x
	
	pocety = nasobky(x, pocetx, y, 2); //Potom zavola funkciu ktora vrati pocet cisel v poli Y, a zapise do pola Y nasobky
	
	printf("Pocet y: %d\ny: ", pocety);
	vypisPola(y, pocety); //Na konci sa vypise pole y
	 
	return 0;
}
