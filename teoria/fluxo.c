/*

Comandos de fluxo

Sintaxe:

if(teste) {

    //teste é verdadeiro!

}else {

    //teste é falso!

}

*Bloco com uma linha não precisa de chaves
*else é opcional

* ?: ----> Ternário

if (a>b) maior = a;
else maior = b;

maior = (a>b)?a:b;

*/
#include <stdio.h>
int main() {

    int x;
    scanf("%d", &x);

    if(x)
        printf("%d\n", x);
    return 0;

}