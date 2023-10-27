#include <stdio.h>

void troca (int *x, int *y) {
    int tmp = *x;
    *x =  *y;
    *y = tmp;
}

int main() {
    int a = 3, b = 5; 
    troca(&a,&b);
    printf("a = %d\t b = %d\n", a, b);
    return 0;
}

