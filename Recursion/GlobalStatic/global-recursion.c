#include <stdio.h>

int x = 10;   //global variable

int fun(int n) {
    
    if (n > 0) {
        x++;
        return fun(n - 1) + x;
    }

    return 0;
}

int main() {
    int r;

    r = fun(5);
    printf("%d\n", r);

    r = fun(5);
    printf("%d\n", r);

    return 0;
}
