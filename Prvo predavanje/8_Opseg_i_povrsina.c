//Omoguci korisniku duljinu stranice kvadrata. Izracunati opseg i povrsinukvadrata. 
//Opseg 4*a, povrsina a*a


#include <stdio.h>
int main(){
    int duljina, opseg, povrsina;

    printf("Unesi duljinu stranice:");
    scanf("%d", &duljina);

    opseg= 4*duljina;
    povrsina= duljina*duljina;

    printf("%d\n%d",opseg,povrsina);

    return 0;
}