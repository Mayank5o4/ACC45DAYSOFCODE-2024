#include <stdio.h>

int main() {
	
    int T;
    scanf("%d", &T); 

    while (T--) {
        int X, Y;
        scanf("%d %d", &X, &Y); 
        
        
        int maxPeople = X / (2 * Y);
        
        printf("%d\n", maxPeople); 
    }

    return 0;
}

