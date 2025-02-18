#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        vector<long long> V(n);
        
        for (long long i = 0; i < n; i++) {
            cin >> V[i];
        }
        
        long long m = 0, s = 0;
        
        for (long long i = 1; i < n; i++) {
            long long z = max(V[i - 1] - V[i] , 0LL);
            m = max(m, z);
            s += z;
            V[i] += z;
        }
        
        cout << s + m << endl;
    }

}
