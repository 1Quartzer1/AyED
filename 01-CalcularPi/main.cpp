#include <iostream>
#include <iomanip>
using namespace std;

double calcularPi() {
    double pi = 0.0;
    double denominador = 1.0;
    int signo = 1;

    for (int i = 0; i < 1000000; i++) {
        pi += signo / denominador;
        denominador += 2;
        signo *= -1;

        if (i % 10000 == 0) {
            double piAproximado = pi * 4;
            double error = abs(piAproximado - 3.141592);
            if (error < 0.000001) {
                return piAproximado;
            }
        }
    }
    return pi * 4;
}

int main() {
    double pi = calcularPi();
    cout << fixed << setprecision(6);
    cout << "El valor aproximado de pi es: " << pi << endl;
    return 0;
}