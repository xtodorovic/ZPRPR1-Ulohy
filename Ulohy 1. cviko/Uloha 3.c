// Miroslav Todorovic - Uloha 4

#include <stdio.h>

int main()
{
	float r, obvod_kruznice, obsah_kruhu, objem_gule, povrch_gule;
	const float pi = 3.14;
	
	printf("Zadajte polomer: ");
	scanf("%f", &r); 
	obvod_kruznice = 2*r*pi;
	obsah_kruhu = pi*(r*r);
	objem_gule = (4*pi*(r*r*r))/3;
	povrch_gule = 4*pi*(r*r);
	
	printf("Obvod kruznice = %f\n", obvod_kruznice);
	printf("Obsah kruhu = %f\n", obsah_kruhu);
	printf("Objem gule = %f\n", objem_gule);
	printf("Povrch gule = %f\n", povrch_gule);
	
	//a tiez mozeme pouzit iba jednu premennu:	
/*	printf("Obvod kruznice = %f\n", 2*r*pi);
	printf("Obsah kruhu = %f\n", pi*(r*r));
	printf("Objem gule = %f\n", (4*pi*(r*r*r))/3);
	printf("Povrch gule = %f\n", 4*pi*(r*r));
	*/
	return 0;
}
