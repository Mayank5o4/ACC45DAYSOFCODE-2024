#include <stdio.h>

int main() {
	int T;
    scanf("%d", &T);
    
    while (T--) {
        int x, y;
        scanf("%d %d", &x, &y);
        
        
        int max_months = (y - 1) / x;
        
        printf("%d\n", max_months);
    }
    return 0;

}

