#include <stdio.h>

int primo(int numero) {
    int div = 0, i=1, resp;
    if (numero==2) return 1;
    for (; i<=numero; i++){
        if (numero % i == 0) div++;
    }
    return (div == 2);
}

int main(){

    int n, primos=0;
    scanf("%d", &n);
    int j = n+1;
    do {
        if (n==0) break;
        if (primo(j)) {
            primos++;
            printf("%d\n", j);
        }
        j++;
    } while(primos<n);
    return 0;
    }
