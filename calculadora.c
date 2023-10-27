#include <stdio.h>

int main() {

    int a, b, r;
    char operador;

    do {
        scanf("%d %c%d", &a, &operador, &b);
        if((operador == 'q') || (operador == 'Q')) break;

        if(operador =='*') r = a*b;
        else if(operador == '-') r = a-b;
        else if(operador == '+') r = a+b;
        else if(operador == '/') {
            if(b==0) {
                printf("Divisão por zero!\n");
                continue;
            }
            r = a/b;
        } else {
            printf("Operador inválido\n");
            continue;
        }
        printf("%d %c %d = %d\n", a, operador, b, r);
    } while(1);

    return 0;
}
