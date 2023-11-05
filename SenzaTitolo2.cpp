#include <stdio.h>

int main()
{
    // parte sottostante dichiarativa
    float eccesso1, eccesso2, eccesso3, eccesso4;
    float difetto1, difetto2, difetto3, difetto4;
    int num;
    // parte sottostante di input o caricamento dei dati
    printf("Inserisci il numero di cui calcolare la readice quadrata ");
    scanf("%d", &num);
    eccesso1 = num;
    difetto1 = 1;
    eccesso2 = (eccesso1+difetto1)/2;
    difetto2 = num/eccesso2;
    eccesso3 = (eccesso2+difetto2)/2;
    difetto3 = num/eccesso3;
    eccesso4 = (eccesso3+difetto3)/2;
    // parte sottostante di output
    printf("La readice quadrata del numero %d e' %f", num, eccesso4);

    return 0;
}