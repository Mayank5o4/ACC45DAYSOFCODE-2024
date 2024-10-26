#include <stdio.h>

int main() {
	

int T; 
    scanf("%d", &T);

    while (T--) {
        int N; 
        scanf("%d", &N);

        
        int numberOfTuesdays = (N + 5) / 7;

        
        printf("%d\n", numberOfTuesdays);
    }

    return 0;
}

