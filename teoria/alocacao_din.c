/*

Problema: dimensionamento do vetor

Alocação dinâmica para melhor dimensionamento

Vetores entre funções


void *malloc(int tam_bytes) =======> alocação
void *realloc(void *ptr, int novo_tam_bytes) =======> alocação
void *free(void *ptr) ========> desalocação


*/

#include <stdio.h>
#include <stdlib.h>

void leitura(int vet[], int len) {
    int i;
    
    for(i = 0; i < len; i++) {
        scanf("%d", &vet[i]);
    }
}

void imprime(int *vet, int len) {
    int i;

    for(i = 0; i < len; i++) {
        printf("vet[%d]=%d\n", i, vet[i]);
    }
}


int *copia_vetor(int *vet, int n) {
    int *resp = (int *)malloc(sizeof(int)*n);
    int i;
    for(i = 0; i<n; i++) {
        resp[i] = vet[i];
    }
    return resp;
}



int main() {
    int n;
    scanf("%d", &n);
    if(n<=0) return 0;

    int vet[n];
    leitura(vet, n);
    imprime(vet, n);

    int *copia = copia_vetor(vet, n);
    copia = (int *) realloc(copia, n/2*sizeof(int));
    imprime(copia, n/2);
    free(copia);

    return 0;
}