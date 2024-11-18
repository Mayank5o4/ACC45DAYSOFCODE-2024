#include <stdio.h>

int main() {
	int t,n,x;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d %d",&n,&x);
	 if(x%n==0)
	{ printf("Yes\n");}
	else 
	{
	    printf("NO\n");
	}
	}
	return 0;
}


