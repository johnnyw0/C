#include <stdio.h>
#include <stdlib.h>

void ret_mult_k(int *vet, int k, int *novo_tam) {
    int i = 0, n = (*novo_tam), j;

    while (i < n - 1) {
        if ((vet[i] % k) == 0) {
            for (j=1; j<n-1; j++) vet[j] = vet[j+1];
            n--;
        } else i++;
    }
    if ((vet[i] % k) == 0) n--;
    (*novo_tam) = n;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) return 0;

    int *vet = (int *)malloc(sizeof(int)*n), i, k;

    for (i=0; i<n; i++) scanf("%d", &vet[i]);

    scanf("%d", &k);

    ret_mult_k(vet, k, &n);

    vet = (int *)realloc(vet, sizeof(int) * n);
    
    for (i=0; i<n; i++) printf("%d", vet[i]);

    free(vet);
    return 0;
}