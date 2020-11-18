// Miroslav Todorovic - Cvicenie 3 - Uloha 5
// Cviciaci: J.Hanák
#include <stdio.h>

int main()
{
	int N;
	int i, postupnost;
	
	scanf("%d", &N); //Najprv nacita cele cislo N
	
	int array[N]; //Potom som deklaroval array typu int ked uz mam velkost
	
	if(N >= 0 && N <= 10) //Podmienka pre prve cislo <0,10>
	{	
		for(i=0; i<N; i++)//Nacitavame N cisel
		{
			scanf("%d", &array[i]);
		}
	
		for(i=1; i<N; i++) //Zaciname od 1 lebo budeme testovat predchadzajuce cisla
		{
			if(array[i] < (array[i-1]*2) && array[i] > (array[i-1]/2)) //Podmienky pre postupnost
			{
				postupnost = 1; //Je 1 ak je postupnost spravna
			}
			else
			{
				postupnost = 0; // Aby nevypisoval 2-krat spravu
				printf("Postupnost nie je spravna\n"); //Ak nie je spravna, hned konci a vypise spravu
				break;
			}
		}

		if(postupnost)//Ak je premenna postupnost true, tak vypise spravu
		{
			printf("Postupnost je spravna\n");
		}
	}
	return 0;
}
