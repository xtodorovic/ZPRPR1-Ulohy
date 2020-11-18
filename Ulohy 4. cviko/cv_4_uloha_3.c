// Miroslav Todorovic - Cvicenie 4 - uloha 3
// Cviciaci: J.Hanák

#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	char ch;
	int a=0, e=0, i=0, o=0, u=0, y=0;
	fp=fopen("subor_uloha3.txt", "r");
	
	if( fp == NULL)//Program otestuje ak sa spravne otvoril subor
	{
		printf("Nepodarilo sa nacitat subor.\n");
		return 1;
	}
	
	while((ch=getc(fp)) != EOF) //Nacitava kazde pismenko
	{
		switch(ch)
		{
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': i++; break;
			case 'o': o++; break;
			case 'u': u++; break;
			case 'y': y++; break;
			default:
				continue;
		}
	}
	
	printf("a - %d krat\n",a);
	printf("e - %d krat\n",e);
	printf("i - %d krat\n",i);
	printf("o - %d krat\n",o);
	printf("u - %d krat\n",u);
	printf("y - %d krat\n",y);
	
	
	if(fclose(fp)==EOF) //Program otestuje ak sa spravne zatvoril subor
	{
		printf("Nepodarilo sa zatvorit subor.\n");
	}
	
	return 0;
}
