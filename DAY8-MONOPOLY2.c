#include <stdio.h>

int main() {
	int T;
	scanf("%d", &T);
	
	while(T--) {
	    int P, Q, R, S;
	    scanf("%d %d %d %d", &P, &Q, &R, &S);
	    
	    if(P > Q + R + S || Q > P + R + S || R > P + Q + S || S > P + Q + R) {
	        printf("Yes\n");
	    } else {
	        printf("No\n");
	    }
	}
	
	return 0;
}
	    
	


