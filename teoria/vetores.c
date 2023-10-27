/*

conjunto de elementos homogêneos de tamanho fixo

*/

#include <stdio.h>
//passagem de valor para funções

void leitura(int *vet, int n) {
    int i;
    for(i = 0; i<n; i++) scanf("%d", &vet[i]);
}

void imprime(int *vet, int n) {
    int i;
    for(i=0; i<n; i++) printf("[%d] ", vet[i]);
}

int main() {
    int n;
    scanf("%d", &n);
    if(n<=0) return 0;
    int vet[n], i;
    leitura(vet, n);
    imprime(vet, n);
    return 0;
}



