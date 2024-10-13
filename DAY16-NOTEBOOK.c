#include <stdio.h>

int main() {
	int T;
    scanf("%d", &T);  
    
    while (T--) {
        int N;
        scanf("%d", &N);  
        
        int notebooks = 10 * N;  
        printf("%d\n", notebooks); 
    }
    
    return 0;
}
