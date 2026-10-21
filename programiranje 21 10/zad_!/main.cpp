#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double zbroji(double a, double b) {
    return a + b;
}

double oduzmi(double a, double b) {
    return a - b;
}

double pomnozi(double a, double b) {
    return a * b;
}

double podijeli(double a, double b) {
    return a / b;
}

void ispisiRezultat(double rezultat) {
    printf("%i\n", rezultat);
}

int main() {
    double a, b;

    printf("unesi a")
    scanf("%i",&a);
    printf("unesi b")
    scanf("%i",&b);
    printf("Zbroj: ");
    ispisiRezultat(zbroji(a, b));

    printf("Razlika: ");
    ispisiRezultat(oduzmi(a, b));

    printf("Umnozak: ");
    ispisiRezultat(pomnozi(a, b));

    if (b != 0) {
        printf("Kolicnik: ");
        ispisiRezultat(podijeli(a, b));
    } else {
        printf("Dijeljenje nije moguce.\n");
    }
    return 0;
}
