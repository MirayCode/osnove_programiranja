//Za 2 pozitivna cijela broja unesi formulu k=a^2+b^2 na kvadrat te ispisi rezultat
#include <stdio.h>
int main(){
    int a,b;
    double rezultat;

    printf("Unesi a:");
    scanf("%d", &a);
    printf("Unesi b:");
    scanf("%d", &b);

    rezultat=(a*a)+(b*b);
    printf("Rezultat kvadratne jednadzbe je:%.1f",rezultat);

    return 0;
}