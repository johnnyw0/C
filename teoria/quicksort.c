/*
Mais rápido algoritmo de ordenação: O(n log n) para todas as entradas exceto duas

Recursivo

qsort geral; stdlib
*/

#include <stdio.h>

void quick_sort_int(int *vet, int n) {


    // Se o tamanho 
    if (n<=1) return;
    int x = vet[0], a = 1, b = n - 1;


    do
    {
        while((a < n) && (vet[a] <= x)) a++;
        while(vet[b] > x) b--;


        if (a<b) {
            int tmp = vet[a];
            vet[a] = vet[b];
            vet[b] = tmp;
        }

    } while (a<=b);

    vet[0] = vet[b];
    vet[b] = x;
    quick_sort_int(vet, b);
    quick_sort_int(&vet[b+1], n-b-1);
    
}
