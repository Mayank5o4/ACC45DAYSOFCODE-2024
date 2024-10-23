#include <stdio.h>

int main() {
 int T;
    scanf("%d", &T);
    
    while (T--) {
        int H, X, Y;
        scanf("%d %d %d", &H, &X, &Y);
        
       
        int remaining_health = H - Y;
        
        
        int normal_attacks = (remaining_health + X - 1) / X;
        
        
        int total_attacks = 1 + normal_attacks;
        
        printf("%d\n", total_attacks);
    }
    
    return 0;

}

