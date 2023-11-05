#include <stdio.h>
#include <math.h>									// includo math.h per consentire al programma di usare la funzione <sqrt> M_PI
int main(){
	float area, perimetro;							// uso <float> per poter anche inserire un numero con la virgola
	printf("Inserire l'area del cerchio ");
	scanf("%f", &area);								// avendo usato <float> per leggere l'area devo usare non più "%d", ma "%f"
	perimetro=(sqrt(4 * M_PI * area));
	printf ("Perimetro: %f\n", perimetro);
	return 0;
}													// <float> e <M_PI> gli ho trovati su manuali internet