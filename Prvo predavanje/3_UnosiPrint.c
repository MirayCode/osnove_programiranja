//Omoguci korisniku 1 cijeli broj a nakon unosa isprintaj na ekran.
#include <stdio.h>

int main(){
    int uneseni_broj;
    
    printf("Unesite neki broj:");
    scanf("%d",&uneseni_broj);

    printf("Broj je %d", uneseni_broj);
    return 0;
}