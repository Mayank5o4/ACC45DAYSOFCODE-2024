#include <stdio.h>

int main() {
	int T;
    scanf("%d", &T); 
    
    while (T--) {
        int N, K;
        scanf("%d %d", &N, &K);  
        
        int wolverine_like_count = 0;
        
        for (int i = 0; i < N; i++) {
            int characteristic_value;
            scanf("%d", &characteristic_value);  
           
            if ((characteristic_value + K) % 7 == 0) {
                wolverine_like_count++;
            }
        }
        

        printf("%d\n", wolverine_like_count);
    }
    
    return 0;
    
}

