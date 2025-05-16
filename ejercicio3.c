#include <stdio.h>

int suma(int a, int b) {
    return a + b;
}

int main()
{
    int res, a = 10, b = 6;

    res = suma(a, b);
    printf("La suma es %d\n", res);

    return 0;
}
