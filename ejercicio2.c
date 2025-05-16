//UTILIZANDO UNA LISTA CAPTURAR LAS CINCO CALIFICACIONES DE UN ALUMNO E IMPRIMIR EL PROMEDIO 

#include <stdio.h>

int main() {
    int list[5];
    int i, calif = 0;
    float prom;

    for (i = 0; i < 5; i++) {
        printf("calificación #%d: ", i + 1);
        scanf("%d", &list[i]);
        calif = calif + list[i];
    }

    prom = calif / 5.0;
    printf("el promedio es: %f\n", prom);

    return 0;
}
