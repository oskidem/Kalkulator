#include <stdio.h>
#include "dodawanie.h"

int main() {
    int a,b,wybor;
    int odejmowanie;
    printf("Podaj jakie dzialanie chcesz wykonac: \n1-dodawanie\n2-odejmowanie\n3-dzielenie\n4-mnozenie\n");
    scanf("%d",&wybor);

    switch (wybor){
        case (1):
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&a);
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&b);
            printf("Wynik: %d", dodawanie(a,b));
            break;
        case (2):
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&a);
            printf("Podaj pierwsza liczbe: ");
            scanf("%d",&b);
            printf("Wynik: %d", odejmowanie);
            break;
    }
    return 0;
}