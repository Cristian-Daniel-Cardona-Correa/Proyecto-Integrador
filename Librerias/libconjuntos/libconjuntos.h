#ifndef LIBCONJUNTOS_H
#define LIBCONJUNTOS_H

#ifdef __cplusplus
extern "C" {
#endif

#define MAX_ELEMENTOS 10

int estaEnConjunto(int elemento, int conjunto[], int n);

int unionConjuntos(int A[], int nA, int B[], int nB, int resultado[]);

int interseccionConjuntos(int A[], int nA, int B[], int nB, int resultado[]);

int diferenciaConjuntos(int A[], int nA, int B[], int nB, int resultado[]);

#ifdef __cplusplus
}
#endif

#endif  // LIBCONJUNTOS_H