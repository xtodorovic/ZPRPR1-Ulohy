// Miroslav Todorovic - Cvicenie 4 - uloha 1
// Cviciaci: J.Hanák

#include <stdio.h>

int main()
{
	int vstup;
	int i,j;
	
	while(1)
	{
		scanf("%d", &vstup);//Vstup 
		
		if(vstup%2 == 0) //If otestuje ci je vstup parne cislo
		{
			printf("Zadajte neparne cislo!\n"); //Ak je parne cislo musi vlozit este raz kym ne bude neparne
		}
		else{
			for(i=0; i<vstup; i++)//riadky
			{
				for(j=0; j<vstup; j++)//stlpce
				{
					if(j == vstup/2 || i == vstup/2)//Podmienky pre vypisovanie hviezdiciek
					{
						printf("*");
					}
					else
					{
						printf(" ");
					}
				}
				printf("\n"); 
			}
			
			break;//Skonci while cyklus
		}
	}
	
	return 0;
 } 
