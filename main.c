#include <stdio.h>
int dodawanie (int a, int b); /*prototyp funkcji*/

int main() {
    int a;
    int b;
    int wynik;
    printf("Funkcja, ktora pozwala na dodanie dwoch liczb calkowitych\n");
    printf("Podaj pierwsza liczbe:\n",a);
    scanf("%d",&a);
    printf("Podaj druga liczbe:\n",b);
    scanf("%d",&b);
    wynik= dodawanie(a,b);
    printf("Wynik dodawania %d", wynik);
    getchar();
    return 0;
}
int dodawanie (int a, int b)
{
    int dodawanie_ab;
    dodawanie_ab= (a+b);
    return dodawanie_ab;
}

