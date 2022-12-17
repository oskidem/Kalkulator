#include <stdio.h>
#include "dodawanie.h"
#include "odejmowanie.h"
#include "mnozenie.h"
#include "dzielenie.h"
#include "modulo.h"

int main() {
    int a,b,wybor;
    printf("Podaj jakie dzialanie chcesz wykonac: \n1-dodawanie\n2-odejmowanie\n3-dzielenie\n4-mnozenie\n5-modulo\n");
    scanf("%d",&wybor);

    switch (wybor){
        case (1):
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&a);
            printf("Podaj druga liczbe: ");
            scanf("%d",&b);
            printf("Wynik: %d", dodawanie(a,b));
            break;
        case (2):
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&a);
            printf("Podaj druga liczbe: ");
            scanf("%d",&b);
            printf("Wynik: %d", odejmowanie(a, b));
            break;
        case (3):
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&a);
            printf("Podaj druga liczbe: ");
            scanf("%d",&b);
            printf("Wynik: %d", dzielenie(a, b));
            break;
        case (4):
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&a);
            printf("Podaj druga liczbe: ");
            scanf("%d",&b);
            if (b == 0) printf ("Nie dzile przez 0!");
            else printf("Wynik: %d", mnozenie(a, b));
            break;
        case (5):
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&a);
            printf("Podaj druga liczbe: ");
            scanf("%d",&b);
            printf("Wynik: %d", modulo(a, b));
            break;
    }
    return 0;
}