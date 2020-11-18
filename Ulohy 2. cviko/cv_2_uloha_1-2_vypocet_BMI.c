// Miroslav Todorovic - Cvicenie 2 - Uloha 1 a 2
#include <stdio.h>

int main()
{
	float BMI, m, v;
	
	printf("Vlozte hmotnost pouzivatela v kilogramoch: ");
	scanf("%f", &m);
	printf("Vlozte vysku pouzivatela v metroch: ");
	scanf("%f", &v);
	
	BMI = m / (v*v);
	
	printf("BMI = %f ", BMI);
	
	if(BMI >= 19 && BMI <= 25)
	{
		printf("-Normalna hmotnost-");
	}
	else if( BMI > 25)
	{
		printf("-Nadvaha-");
	}
	else
	{
		printf("-Podvyziva-");
	}
	
	return 0;
}
