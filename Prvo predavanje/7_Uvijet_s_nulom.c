//Unijeti jedan realn broj i ispisati na ekran ako je 0<br>ili jednak 10 

#include <stdio.h>
int main(){
    double br, rez;

    printf("Unesi broj:");
    scanf("%lf",&br);

    rez = br>0 && br<=10;

    printf("%lf", rez);
    return 0;
}