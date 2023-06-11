//Omoguci korisniku unos 10 realnih brojeva i izracunaj zbroj tih brojeva
// realni brojevi = decimalni brojevi cijeli brojevi = puni
#include <stdio.h>

int main(){
    float broj, suma;
    int i;

    for(i=0; i<10; i++)
    {
    printf("Unesi broj:\n");
    scanf("%f", &broj);
    suma=suma+broj;
    }

    printf("Zbroj je %.1f\n", suma);
    return 0;
}