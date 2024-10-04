#include <stdio.h>

int main() {
	int T;
    scanf("%d", &T); 
    
    while (T--) {
        int X;
        scanf("%d", &X); 
        
        if (X <= 7) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }
    
    return 0;

}

