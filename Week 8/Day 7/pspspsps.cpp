#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int pIndex1 = -1, sIndex1 = -1;
        int pCount=0, sCount =0;
        int pIndex2 = -1, sIndex2 = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'p' && pIndex1 == -1) {
                pIndex1 = i;
            }
            if(s[i]=='p'){
                pCount++;
                pIndex2 = i;
            }
            if (s[i] == 's' && sIndex1 == -1) {
                sIndex1 = i;
            }
            if(s[i]=='s'){
                sCount++;
                sIndex2 = i;
            }
        }
        
        if (pIndex1 == -1 || sIndex1 == -1 ) {
            cout << "YES" << endl;
        }
        else if(pCount==1 && s[n-1]=='p'){
            cout<< "YES" <<endl;
        }
        else if(sCount==1 && s[0]=='s'){
             cout<< "YES" <<endl;
        }
        else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
