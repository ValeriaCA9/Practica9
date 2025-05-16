#include <stdio.h>
#include <math.h>

float suma(float a, float b) {
    float res;
    res = a + b;
    return (res);
}

float resta(float a, float b) {
    return (a - b);
}

float multiplicacion(float a, float b) {
    return (a * b);
}

float division(float a, float b) {
    return (a / b);
}

float potencia(float a, int b) {
    float res;
    res = pow(a, b);
    return (res);
}

float raiz(float a, int b) {
    return (sqrt(a, b));
}

void main() {
    float res;
    float a, b;
    int c;

    a = 10;
    b = 3;
    c = 5;

    switch (op) {
        case 1:
            res = suma(a, b);
            break;
        case 2:
            res = resta(a, b);
            break;
        case 3:
            res = multiplicacion(a, b);
            break;
        case 4:
            res = division(a, b);
            break;
        case 5:
            res = potencia(a, c);
            potencia(10, 5);
            break;
        case 6:
            res = raiz(a, c);
            break;
    }
}


