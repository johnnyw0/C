/*
















*/
#include <stdio.h>

int main() {
    int a, b, *pi;
    float c, d, *pf;
    char e, f, *pc;
    pi = &a;
    printf("a = %d(%p)\tb = %d(%p)\tpi = %p(%p)\n", a, &a, b, &b, pi, &pi);
    a = 1;
    printf("a = %d(%p)\tb = %d(%p)\tpi = %p(%p)\n", a, &a, b, &b, pi, &pi);
    (*pi) += 5;
    printf("a = %d(%p)\tb = %d(%p)\tpi = %p(%p)\n", a, &a, b, &b, pi, &pi);
    b = 3;
    printf("a = %d(%p)\tb = %d(%p)\tpi = %p(%p)\n", a, &a, b, &b, pi, &pi);
    (*pi) = a+b;
    printf("a = %d(%p)\tb = %d(%p)\tpi = %p(%p)\n", a, &a, b, &b, pi, &pi);
    return 0;
}