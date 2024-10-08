#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y);
        int time = abs(X - Y);
        printf("%d\n", time);
    }
    return 0;

}

