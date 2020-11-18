// Miroslav Todorovic - Cvicenie 5 - Uloha 4
// Cviciaci: Igor Stupavský
#include <stdio.h>

void vlozPeniaze(int *ucet, int vklad)
{
	*ucet += vklad;
}
	
void vyberPeniaze(int *ucet, int *vyber)
{
	int ina_suma;
	if(*ucet - *vyber < 0 )
	{
		printf("Na ucte mate %d eur, nemozete vybrat %d eur!\nVlozte inu sumu na vyber: ", *ucet, *vyber);
		scanf("%d", &ina_suma);
		*vyber = ina_suma;
		vyberPeniaze(ucet, vyber);
	}
	else
	{
		*ucet -= *vyber;
	}
}
	
int main()
{
	int vstup, koniec=1;
	int bankovy_ucet=1000, suma;
	
	printf("Volba 1: Vlozenie sumy penazi na bankovy ucet.\n");
	printf("Volba 2: Vyber sumy penazi z bankoveho uctu.\n");
	printf("Volba 3: Zistenie stavu na bankovom ucte.\n");
	printf("Volba 4: Koniec cinnosti automatu. \n");
	
	while(koniec != 0)
	{
		scanf("%d", &vstup);
		switch(vstup)
		{
			case 1:
				scanf("%d", &suma);
				vlozPeniaze(&bankovy_ucet, suma);
				printf("\tPo vlozeny sumy %d eur je na ucte %d eur.\n", suma, bankovy_ucet);
				break;
			case 2:
				scanf("%d", &suma);
				vyberPeniaze(&bankovy_ucet, &suma);
				printf("\tPo vyberu sumy %d eur je na ucte %d eur.\n", suma, bankovy_ucet);
				break;
			case 3: 
				printf("\tStav: Na ucte mate %d eur.\n", bankovy_ucet);
				break;
			case 4: 
				koniec = 0;
				break;
			default: 
				printf("Nespravna volba! Skuste znovu.\n");
			break;
		}
	}
	return 0;
}
