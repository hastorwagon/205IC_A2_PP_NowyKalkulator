#include <stdio.h>
#include <stdlib.h>
#include "prosty_kalkulator.h"

int main(struct liczby *parametr) {
    struct Kalkulator *ProstaArytmetyka=malloc(sizeof(struct liczby));
    WpiszParametry(ProstaArytmetyka);
    WykonajDzialanie(ProstaArytmetyka);
}
