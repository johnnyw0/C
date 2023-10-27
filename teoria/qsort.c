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
        printf("vet[%d]=%d", i, vet[i]);
    }
}

void cmp_int(const void *p1, const void *p2) {
    int *i1 = (int *)p1, *i2 = (int *)p2;

    if (*i1 < *i2) return -1;
    if (*i1 > *i2) return 1;
    return 0;
}


int main() {
    int n;
    scanf("%d", &n);
    if(n<=0) return 0;

    int vet[n], i;

    leitura(vet, n);
    qsort(vet, n, sizeof(int), cmp_int);
    escrita(vet, n);
    return 0;
}