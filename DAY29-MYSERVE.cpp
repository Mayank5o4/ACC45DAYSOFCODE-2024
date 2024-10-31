#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int p,q;
	    cin>>p>>q;
	    int s=p+q;
	    if((s/2)%2==0)
	    cout<<"Alice"<<endl;
	    else 
	    cout<<"Bob"<<endl;
	    
	    
	}
	return 0;
}
