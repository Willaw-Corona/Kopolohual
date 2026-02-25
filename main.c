/* ¡Un favor de leer la licencia (GPL) antes de distribuirme!
Requiro que lo leas antes de distribuir. */
#include <stdio.h>
#include <float.h>

int main() {
    char op;
    double a, b, res;

    // Lee el operador
    printf("Inserta un operador (+, -, *, /): ");
    scanf("%lf %lf", &a, &b);

    // Define los cuatro operadores correspondientes
    // switch-case
    switch (op)
    {
    case '+':
        res = a + b;
        break;
    case '-':
        res = a - b;
        break;
    case '*':
        res = a * b;
        break;
    case '/':
        res = a / b;
        break;
    default:
        printf("¡Error! Valor del operador incorrecto\n");
        break;
    }
    if(res!=DBL_MAX)
        printf("%.2lf", res);
    
    return 0;
}