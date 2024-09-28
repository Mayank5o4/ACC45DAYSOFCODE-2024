#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int t;
    cin>>t;
    
    while (t--){
        int n;
        cin>>n;
        
        string s;
        cin>>s;
        
        int cnt = 0;
        bool ans = true;
        
        for (int i = 0;i<n;i++){
            if(s[i] != 'a' and s[i] != 'e' and s[i] != 'i' and s[i] != 'o' and s[i] != 'u')
            
            
            
                cnt++;
            
            else
        
        
        
                cnt = 0;
            
            if (cnt >= 4){
                ans = false;
                break;
            }
        }      
    
        if (ans)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }   
    return 0;
}
        
        
        
        
               
    



