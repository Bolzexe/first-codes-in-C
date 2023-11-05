#include <stdio.h>

int main() {
    int dividendo, divisore;

    printf("Inserisci il dividendo: ");
    scanf("%d", &dividendo);

    printf("Inserisci il divisore: ");
    scanf("%d", &divisore);


    int quoziente = 0;
    int resto = dividendo; //il resto è uguale al dividendo

while (resto >= divisore) {
            resto -= divisore;
            quoziente++;
        }


        printf("Il quoziente è: %d\n", quoziente);
        printf("Il resto è: %d\n", resto);
    
    return 0;
}
    
    