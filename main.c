#include <stdio.h>
#include "dodawanie.h"

int main() {
    int a,b,wybor;
    int dodawanie;
    int odejmowanie;
    printf("Podaj jakie dzialanie chcesz wykonac: \n1-dodawanie\n2-odejmowanie\n3-dzielenie\n4-mnozenie\n");
    scanf("%d",&wybor);

    switch (wybor){
        case (1):
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&a);
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&b);
            dodawanie= a+b;
            printf("Wynik: %d",dodawanie);
            break;
        }
            return 0;
}



