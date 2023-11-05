#include <stdio.h>
int main () {
int lato, area, perimetro;
printf ("Inserire la dimensione del lato del quadrato");
scanf("%d", &lato);
perimetro=4*lato;
area=lato*lato;
	printf ("AREA: %d\n", area);
	printf ("PERIMETRO: %d\n", perimetro);

    return 0;
}