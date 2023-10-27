#include <stdio.h>
#include <stdlib.h>

int* ins_antes_depois_x(int *vet, int n, int x, int *tam_vet_resposta) {
    int cont;
    for(int k = 0; k<n; k++) {
        if(vet[k]==x) cont++;
    }
    int *newA = (int *)malloc(sizeof(int)*(n+2*cont));
    int j = 0, n2 = 0;
    *tam_vet_resposta = n+2*cont;
    for(int i = 0; i<n; i++) {
        if (vet[i] != x) {
            newA[j] = vet[i];
            n2++;
            if(n2>=(n+2*cont)) return newA;
            j++;

        } else {
            newA[j] = x-1;
            newA[j+1] = x;
            newA[j+2] = x+1;
            n2 += 3;
            if(n2>=(n+2*cont)) return newA;
            j += 3;
        } 
    }
    
}



int main(void){
  int n;
  do{
    scanf("%d", &n);
    if(n > 0)break;
  }while(1);
  int vet[n], k, x, tam_vet2;
  for(k = 0; k < n; k++)scanf("%d", &vet[k]);
  scanf("%d", &x);
  for(k = 0; k < n; k++)printf("%d\n", vet[k]);
  int *resp = ins_antes_depois_x(vet, n, x, &tam_vet2);
  for(k = 0; k < tam_vet2; k++) printf("%d\n", resp[k]);
  free(resp);
  return 0;
}