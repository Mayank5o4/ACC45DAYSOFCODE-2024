#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        
        int DSA1, TOC1, DM1;
        cin >> DSA1 >> TOC1 >> DM1;
        
        int DSA2, TOC2, DM2;
        cin >> DSA2 >> TOC2 >> DM2;
        
        int totalDragon = DSA1 + TOC1 + DM1;
        int totalSloth = DSA2 + TOC2 + DM2;
        
        if (totalDragon > totalSloth) {
            cout << "Dragon" << endl;
        } else if (totalSloth > totalDragon) {
            cout << "Sloth" << endl;
        } else { 
            if (DSA1 > DSA2) {
                cout << "Dragon" << endl;
            } else if (DSA2 > DSA1) {
                cout << "Sloth" << endl;
            } else {
                if (TOC1 > TOC2) {
                    cout << "Dragon" << endl;
                } else if (TOC2 > TOC1) {
                    cout << "Sloth" << endl;
                } else {
                    cout << "Tie" << endl;
                }
            }   
        }        
    }
    return 0;
}
               
            
        
        
    


