#include <stdio.h>

int get_mdc(int x, int y) {
    int tmp;
    if(x>=y) {
        while(1) {
            if(x%y!=0) {
                tmp = x%y;
                x = y;
                y = tmp;
            } else break;
        }
        return y;
    } else {
        while(1) {
            if(y%x!=0) {
                tmp = y%x;
                y = x;
                x = tmp;
            } else break;
        }
        return x;
    }
}


int main() {
    int i, n, a, b;
    scanf("%d", &n);
    for (; i<n; i++) {
        scanf("%d %d", &a, &b);
        printf("%d\n", get_mdc(a, b));
    }   
    return 0;
}

