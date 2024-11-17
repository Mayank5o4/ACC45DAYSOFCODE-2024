#include <stdio.h>

int main() {
		int t;
	scanf("%d",&t);
	while(t>0){
	    int a,b,c;
	    scanf("%d%d%d",&a,&b,&c);
	    if((a+(c/30))%b ==0){
	    printf("%d\n",(a+(c/30))/b);
	    }else{
	        printf("%d\n",((a+(c/30))/b)+1);
	    }
	    t--;
	    
	}
	return 0;

}

