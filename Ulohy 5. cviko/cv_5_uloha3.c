// Miroslav Todorovic - Cvicenie 5 - Uloha 3
// Cviciaci: Igor Stupavský
#include <stdio.h>

int binarnaReprezentacia(int *pole, int cislo)
{
	int i;
	while(cislo != 0)
	{
		if(cislo%2 == 0)
		{
			pole[i] = cislo%2;
			cislo = cislo/2;
			i++;
		}
		else if(cislo%2 == 1)
		{
			pole[i] = cislo%2;
			cislo = cislo/2;
			i++;
		}
		else if(cislo == 1)
		{
			pole[i] = 1;
			cislo = 0;
		}
	}
	
	return i-1;
}

void vypisBinarnejReprezentacie(int *pole, int n)
{
	int i;
	for(i=n; i>=0; i--)
	{
		printf("%d", pole[i]);
	}
}
	
int main()
{
	int i=0,dlzka_pola=0;
	int cislo;
	int pole[128];
	
	scanf("%d", &cislo);
	
	dlzka_pola = binarnaReprezentacia(pole, cislo);
	vypisBinarnejReprezentacie(pole, dlzka_pola);
	
	return 0;
}
