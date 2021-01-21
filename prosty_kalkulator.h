#include <stdio.h>
#include <stdlib.h>

struct liczby  {
    int x, y;
    float wynik;
    char znak;
};

void WpiszParametry (struct liczby *parametr) {
    printf("Wpisz działanie\n");
    scanf("%d %c %d", &parametr->x, &parametr->znak, &parametr->y);

}

void WykonajDzialanie (struct liczby *parametr) {
    switch (parametr->znak) {
        case '+':
            parametr->wynik = (float) parametr->x + parametr->y;
            break;

        case '-':
            parametr->wynik = (float) parametr->x - parametr->y;
            break;

        case '*':
            parametr->wynik = (float) parametr->x * parametr->y;
            break;

        case '/':
            if (parametr->y == 0 || parametr->x == 0) {
                parametr->wynik = 0;
                break;
            } else if (parametr->y != 0 || parametr->x != 0) {
                parametr->wynik = (float) parametr->x / parametr->y;
                break;
            }

        default:
            printf("Niepoprawny symbol");
    }

    printf("Wynik=%.1f", parametr->wynik);
}