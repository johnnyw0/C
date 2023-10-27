#include <stdio.h>


void troca(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void selection_sort(int *vet, int n) {
    int menor_ind, i, j;

    for (i=0; i<n; i++) {
        menor_ind = i;
        
        for (j=i+1; j<n; j++) {

            if (vet[j]<vet[menor_ind]) menor_ind = j;
        }
        troca(&vet[menor_ind], &vet[i]);
    }
}


int main(){

    int len, i;

    scanf("%d", &len);
    int vet[len];
    for (i=0;i<len;i++) scanf("%d", &vet[i]);


    selection_sort(vet, len);


    for (i=0;i<len;i++) printf("vet[%d]= %d\n", i, vet[i]);
    
    return 0;
}