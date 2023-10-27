#include <stdio.h>

/*
leitura:

int scanf(char*formato, <endereço de variável>);

retorna número de variáveis lidas com sucesso

*formato: %d, %s, %c        %f, %e, %g => float     %lf, %le, %lg => double

int x;
float f;
char c;

scanf("%f, &f");
scanf("%c", &c);
scanf("%d", &x);

& --> representa o endereço de variável


*/










int main() {

    int a, b;

    scanf("%d %d", &a, &b);
    printf("a + b = %d", a+b);

    return 0;
}