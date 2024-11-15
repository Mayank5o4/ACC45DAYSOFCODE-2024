#include <stdio.h>

int main() {
	
	int t;
	scanf("%d",&t);
	while(t--){
	    int n,A,B;
	    scanf("%d %d %d",&n,&A,&B);
	    if(n%2==0){
	        printf("%d\n",(A*(n/2))+(B*(n/2)));
	    }
	    else
	    printf("%d\n",(A*(n/2))+(B*((n/2)+1)));
	}
	return 0;
}

