// Miroslav Todorovic - Cvicenie 6 - Uloha 3
// Cviciaci : Igor Stupavský

#include <stdio.h>

int delitele(int x[], int pocetx, int y[], int k)
{
	int i, pocet_y=0;
	for(i=0; i<pocetx; i++)
	{
		if(k > 0 &&   k % x[i] == 0)
		{
			y[pocet_y] = x[i];
			pocet_y++;	
		}
	}
	return pocet_y;
}

void vypisPola(int pole[], int pocet)
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
	int x[10] = {4, 7, 10, 2, 3, 9, 6, 5, 8, 12};
	int y[10];
	int pocetx=10, pocety=0;
	
	printf("x: ");
	vypisPola(x, pocetx); //Program najprv zapise pole x
	
	pocety = delitele(x, pocetx, y, 24); //Potom zavola funkciu ktora vrati pocet cisel v poli Y, a zapise do pola Y delitele
	
	printf("Pocet y: %d\ny: ", pocety);
	vypisPola(y, pocety); //Na konci sa vypise pole y
	
	return 0;
}
