#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    while (T--) {
        int A, B, C, D;
        scanf("%d %d %d %d", &A, &B, &C, &D); 

       
        if (C >= A && D >= B) {
            printf("POSSIBLE\n");
        } else {
            printf("IMPOSSIBLE\n");
        }
    }
    return 0;
}
