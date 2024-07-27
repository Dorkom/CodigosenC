#include <stdio.h>
int main() {
    float sueldo = 25.456;
    float bono = 4.560;
    sueldo += bono;



    float examen1, examen2;
    printf("Ingrese la nota del primer examen: ");
    scanf("%f",&examen1);
    printf("Ingrese la nota del segundo examen: ");
    scanf("%f",&examen2);

    float notaFinal;
    notaFinal = (examen1 + examen2) / 2;
    printf("Primer examen: %.2f", examen1);
    printf("\nsegundo examen: %.2f", examen2);
    printf("\nLa nota final es: %.2f", notaFinal);
    return 0;
}