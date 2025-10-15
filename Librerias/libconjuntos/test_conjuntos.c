#include <stdio.h>
#include <libconjuntos.h>

void imprimirConjunto(int conjunto[], int n) {
    printf("{");
    for (int i = 0; i < n; i++) {
        printf("%d", conjunto[i]);
        if (i < n - 1) printf(", ");
    }
    printf("}\n");
}

int main() {
    int A[] = {1, 2, 3, 4};
    int nA = 4;
    int B[] = {3, 4, 5, 6};
    int nB = 4;

    int resultadoUnion[MAX_ELEMENTOS];
    int resultadoInterseccion[MAX_ELEMENTOS];
    int resultadoDiferencia[MAX_ELEMENTOS];

    printf("Conjunto A: ");
    imprimirConjunto(A, nA);
    printf("Conjunto B: ");
    imprimirConjunto(B, nB);

    int nUnion = unionConjuntos(A, nA, B, nB, resultadoUnion);
    printf("Unión: ");
    imprimirConjunto(resultadoUnion, nUnion);

    int nInterseccion = interseccionConjuntos(A, nA, B, nB, resultadoInterseccion);
    printf("Intersección: ");
    imprimirConjunto(resultadoInterseccion, nInterseccion);

    int nDiferencia = diferenciaConjuntos(A, nA, B, nB, resultadoDiferencia);
    printf("Diferencia A - B: ");
    imprimirConjunto(resultadoDiferencia, nDiferencia);

    return 0;
}