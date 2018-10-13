#include <stdio.h>

double licz();

int main() {
    double a1, a2, b1, b2, c1, c2, x, y;
    double W, Wx, Wy;

    printf("Podaj a1: ");    scanf("%lf", &a1);
    printf("Podaj a2: ");    scanf("%lf", &a2);
    printf("Podaj b1: ");    scanf("%lf", &b1);
    printf("Podaj b2: ");    scanf("%lf", &b2);
    printf("Podaj c1: ");    scanf("%lf", &c1);
    printf("Podaj c2: ");    scanf("%lf", &c2);


    W = licz(a1, b2, b1, a2);
    Wx = licz(c1, b2, b1, c2);
    Wy = licz(a1, c2, c1, a2);


    printf("Wynik wynosi:\n");
    printf("W= %6.2lf\nWx= %5.2lf\nWy= %5.2lf\n", W, Wx, Wy);


    if (W == 0 && Wx == 0 && Wy == 0) {
        printf("Układ jest nieoznaczony");
    } else if (W == 0 && Wx != 0 && Wy != 0) {
        printf("Układ jest sprzeczny");
    } else if (W != 0) {
        x = Wx / W;
        y = Wy / W;
        printf("Układ jest oznaczony\n");
        printf("X: %5.2lf\nY: %5.2lf\n", x, y);
    }


    printf("Układ równań:\n");
    printf("%5.2lf * %5.2lf + %5.2lf * %5.2lf = %5.2lf", a1, x, b1, y, c1 );


    return 0;
}

double licz(double a, double b, double c, double d) {
    double liczba = a * b - c * d;
    return liczba;
}