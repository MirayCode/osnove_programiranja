//Omoguci korisniku da unese neki broj i podijeli ga s 2 te ispisi na ekran
#include <stdio.h>

int main(){
    int br1;
    float rezultat=0;

    printf("Unesi neki broj:");
    scanf("%d",&br1);
    rezultat = br1/2;

    printf("%.1f", rezultat);

    return 0;
}