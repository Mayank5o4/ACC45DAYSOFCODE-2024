#include <stdio.h>

int main() {
	int T;
    scanf("%d", &T); 

    while(T--) {
        int N;
        scanf("%d", &N); 
        int A[N];
        
        
        for (int i = 0; i < N; i++) {
            scanf("%d", &A[i]);
        }
        
        
        for (int i = N - 1; i >= 0; i--) {
            if (A[i] != 0) { 
                printf("%d\n", i);
                break;
            }
        }
    }

    return 0;

}

