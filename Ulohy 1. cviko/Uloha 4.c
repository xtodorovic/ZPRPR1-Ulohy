// Miroslav Todorovic - Uloha 4

#include <stdio.h>
#include <math.h>

int main()
{
	int a,b,c, diskriminant;
	float x1, x2;
	
	printf("Zadajte cleny v rovnici v tvare a b c: ");
	scanf("%d %d %d", &a, &b, &c);
	
	diskriminant = sqrt((b * b) - (4 * a * c)); // Diskriminant
	
	x1 = ((b * (-1)) + diskriminant) / (2 * a);
	x2 = ((b * (-1)) - diskriminant) / (2 * a);
	
	printf("Korene kvadratickej rovnice su:\nx1 = %f\nx2 = %f", x1, x2);
	return 0;
}
