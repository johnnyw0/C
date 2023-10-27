#include <stdio.h>

int inverter(int n) {
    int num_invertido = 0, ultimos_dig;

    while(n>0) {
        ultimos_dig = n % 100;
        n /= 100;
        num_invertido = num_invertido*100 + ultimos_dig;
    }
    return num_invertido;
}

int teste(int n) {
    int dois_ult, dois_prim, concat;

    dois_prim = inverter(n)%100;
    dois_ult = n%100;

    concat = (dois_prim*100) + dois_ult;

    if ((dois_prim + dois_ult)*(dois_prim + dois_ult) == concat) return 1;
    else return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    if (n<0) return;
    int resp = teste(n);
    printf("%d\n", resp);
    return 0;
}