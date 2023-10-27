#include <stdio.h>

int inverter(int n) {
    int num_invertido=0, ultimo_digito;
    while(n > 0) {
        ultimo_digito = n % 10;
        num_invertido = (num_invertido*10) + ultimo_digito;
        n /= 10;
    }
    return num_invertido;
}

int main() {
    int num;
    while(1) {
        scanf("%d", &num);
        if (num<0) break;
        if (inverter(num) == num) printf("O número é palíndromo\n");
        else printf("O número não é palíndromo\n");
    }
    return 0;
}
