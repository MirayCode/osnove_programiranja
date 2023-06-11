// Omoguci korisnku unos 2 cijela broja i ispisite ta dva broja

#include <stdio.h>

int main(){
    int br1,br2;

    printf("Unesi prvi broj:\n");
    scanf("%d",&br1);
    printf("Unesi drugi broj:\n");
    scanf("%d",&br2);

    printf("Prvi broj je %d\nDrugi broj je %d",br1, br2);
    return 0;
}