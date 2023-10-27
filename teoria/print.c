#include <stdio.h>

/* escrita da função printf:

int printf(char *formato, <lista de variáveis>)

formato: %d, %s, %p, %C

%f, %e, %g, ===> float ou double ===> "normal", científico, mais apropriado

retorna o número de bytes escritos com sucesso

outros formatos: \n, \t, \\, \"

*/


int main(void) {

    int x=5, y;
    char c= "c";
    c++;
    y = printf("Olá mundo\n");
    printf("c= %c");

}