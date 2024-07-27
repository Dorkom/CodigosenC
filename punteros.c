#include <stdio.h>

struct contact {
    int n1;       // Primer miembro
    float n2;     // Segundo miembro
    char st[10];  // Tercer miembro
} d1;

int main() {
    d1.n1 = 5;
    d1.n2 = 3.14f;
    snprintf(d1.st, sizeof(d1.st), "Hello");

    struct contact *dird1 = &d1;    // Puntero a la estructura completa
    int *dirn1 = &d1.n1;            // Puntero al primer miembro (n1)
    float *dirn2 = &d1.n2;          // Puntero al segundo miembro (n2)
    char *dirst = d1.st;            // Puntero al primer elemento del array st

    // Imprimir valores de los miembros
    printf("n1: %d\n", d1.n1);
    printf("n2: %.2f\n", d1.n2);
    printf("st: %s\n", d1.st);

    // Imprimir direcciones de los miembros y la estructura
    printf("puntero d1: %p\n", (void *)dird1);
    printf("puntero d1.n1: %p\n", (void *)dirn1);
    printf("puntero d1.n2: %p\n", (void *)dirn2);
    printf("puntero d1.st: %p\n", (void *)dirst);

    return 0;
}
