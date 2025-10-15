#include "libconjuntos.h"

int estaEnConjunto(int elemento, int conjunto[], int n) {
    for (int i = 0; i < n; i++) {
        if (conjunto[i] == elemento) return 1;
    }
    return 0;
}

int unionConjuntos(int A[], int nA, int B[], int nB, int resultado[]) {
    int nUnion = 0;

    // Copiar elementos de A
    for (int i = 0; i < nA; i++) {
        resultado[nUnion++] = A[i];
    }

    // Agregar elementos de B que no están en A
    for (int i = 0; i < nB; i++) {
        if (!estaEnConjunto(B[i], A, nA)) {
            resultado[nUnion++] = B[i];
        }
    }

    return nUnion;
}

int interseccionConjuntos(int A[], int nA, int B[], int nB, int resultado[]) {
    int nInterseccion = 0;
    for (int i = 0; i < nA; i++) {
        if (estaEnConjunto(A[i], B, nB)) {
            resultado[nInterseccion++] = A[i];
        }
    }
    return nInterseccion;
}

int diferenciaConjuntos(int A[], int nA, int B[], int nB, int resultado[]) {
    int nDiferencia = 0;
    for (int i = 0; i < nA; i++) {
        if (!estaEnConjunto(A[i], B, nB)) {
            resultado[nDiferencia++] = A[i];
        }
    }
    return nDiferencia;
}