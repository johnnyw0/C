#include <stdio.h>

int d2b(int n) {
    if(n<=0) return 0;
    if(n<2) printf("%d\n", 1);
    else {
        d2b(n/2);
        printf("%d\n", n%2);
    }
}

int main() {
    int n = 5;
    d2b(n);
    return 0;
}