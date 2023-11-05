#include <stdio.h>
int main(){
	float perimetro, area;					//si può inserire un perimetro razionale
	printf ("inserire perimetro quadrato");
	scanf ("%f", &perimetro);
	area=(perimetro/4);
	area=area*area;
	printf ("Area: %f\n", area);
	return 0;
}