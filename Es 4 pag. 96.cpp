#include <stdio.h>
int main () {
	int base1, base2, altezza, area;
	printf ("Inserire misura della prima base");
	scanf ("%d", &base1);
	printf ("Inserire misura della seconda base");
	scanf ("%d", &base2);
	printf ("Inserire misura dell'altezza");
	scanf ("%d", &altezza);
	area= ((base1+base2)*altezza);
	printf ("AREA: %d\n", area);
	return 0;
}