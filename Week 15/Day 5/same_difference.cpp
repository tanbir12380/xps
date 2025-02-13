#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> M;
        long long s = 0;
        
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            
            int k = x - i;
            s += M[k];
            M[k]++;
        }
        
        cout << s << endl;
    }

}
