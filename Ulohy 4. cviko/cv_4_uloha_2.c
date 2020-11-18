// Miroslav Todorovic - Cvicenie 4 - uloha 2
// Cviciaci: J.Hanák

#include <stdio.h>

int main()
{
	int vyska, sirka;
	char ch='1';
	int i,j;
	
	while(1)
	{
		printf("Zadajte vysku a sirku: ");
		scanf("%d %d",&vyska,&sirka);
		
		if(sirka%2 == 0)
		{
			printf("Sirka musi byt neparne cislo!\n");
		}
		else
		{
		for(i=0; i<vyska; i++)
			{
				for(j=0; j<sirka; j++)
				{
					if(j < (sirka/2 - i) || j > (sirka/2 + i)) 
					{
						printf("*");
					}
					else{
						printf("%c",ch);
					}
				}
				printf("\n");
				
				if(ch == '9') 
				{
					ch = '0';
				}
				else if(ch == '0')
				{
					ch = 'A';
				}
				else
				{
					ch++;
				}
			}
			break;//Skonci while cyklus
		}
	}
	return 0;
}
