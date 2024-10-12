#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    
    while(T--) {
        int N, K, M;
        scanf("%d %d %d", &N, &K, &M);
        
        int candies_per_bag = K * M; 
        
        
        int bags_needed = (N + candies_per_bag - 1) / candies_per_bag;
        
        printf("%d\n", bags_needed);
    }
    
    return 0;

}

