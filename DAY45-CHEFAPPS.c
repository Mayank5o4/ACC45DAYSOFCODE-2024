#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    while(T--) {
        int S, X, Y, Z;
        scanf("%d %d %d %d", &S, &X, &Y, &Z); 
        
        int freeMemory = S - (X + Y); 
        int neededMemory = Z - freeMemory; 
        
        if(neededMemory <= 0) {
            
            printf("0\n");
        } else if(neededMemory <= X || neededMemory <= Y) {
           
            printf("1\n");
        } else {
            
            printf("2\n");
        }
    }
    return 0;
}

