// Miroslav Todorovic - Cvicenie 7 - Uloha 2

#include <stdio.h>
#include <stdlib.h>

void vytvorpole(int cislo, int *pole) // Tu uz potrebuje ukazovatel aby sme mohli pracovat s polom
{
	int i, j;
	if(cislo > 0)
	{
		if(cislo % 2 == 0)
		{
			j = 32;
			for(i=0; i<5; i++ )
			{
				pole[i] = j;
				j += 2;
			}
		}
		else
		{
			j = 73;
			for(i=0; i<5; i++ )
			{
				pole[i] = j;
				j += 3;
			}
		}
	}
	else 
	{
		printf("Zadajte kladne cislo.");
	}
}

int main()
{
	int cislo, i;
	int *pole;
	
	printf("Zadaj cele cislo: ");
	scanf("%d", &cislo);
	
	pole = (int *)malloc(5 * sizeof(*pole));
	
	vytvorpole(cislo, pole); //jednorozerne pole nesmie mat ukazovatel ked ho posleme do funkcie
	
	printf("Pole ma hodnoty: ");
	for(i=0; i<5; i++ )
	{
		printf("%d ",pole[i]);
		
	}
	
	free(pole); 
	
	return 0;
}
