// Miroslav Todorovic - Cvicenie 3 - Uloha 2
// Cviciaci: J.Hanák
#include <stdio.h>

int main()
{
	char vstup[3]; //Pouzil som array lebo sa da jednoduchsie zmenit na male alebo velke pismenka a tiez sa da usporiadat podla abecedy 
	char pom;
	int i,j;
	
	scanf("%c %c %c", &vstup[0], &vstup[1], &vstup[2]); //Nacitame 3 pismenka a ulozime ich do array
	//Keby sme mali viac ako 3 pismenka budeme potrebovat vela if vetiev, takze takto sa jednoduchsie riesi problem
	for(i=0; i<3; i++)
	{
		if(vstup[i] >= 'A' && vstup[i] <= 'Z')//Ak je velke pismenko, zmeni na male
		{
			vstup[i] = vstup[i] - 'A' + 'a';
		}
	}
	
	for(i=0; i<2; i++)
	{
		for(j=0; j<2-i; j++)
		{
			if(vstup[j] > vstup[j+1])//Testuje ktore pismenko je najmensie a zmeni miesta
			{
				pom = vstup[j];
				vstup[j] = vstup[j+1];
				vstup[j+1] = pom;
			}
		}
	}
	
	printf("%c %c %c\n", vstup[0], vstup[1], vstup[2]); //Vypise spravu 
	
	return 0;
}
