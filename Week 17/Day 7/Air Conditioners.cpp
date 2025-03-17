#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n, k, m;
        cin >> n >> k;
        
        vector<int> V1(n + 1, 2e9), V2(k), V3(n + 1, 0);
        
        for (int i = 0; i < k; i++) {
            cin >> V2[i];
        }
        
        for (int i = 0; i < k; i++) {
            cin >> m;
            V1[V2[i]] = m;
        }
        
        for (int i = 2; i <= n; i++) {
            V1[i] = min(V1[i], V1[i - 1] + 1);
        }
        
        for (int i = n - 1; i > 0; i--) {
            V1[i] = min(V1[i], V1[i + 1] + 1);
        }
        
        for (int i = 1; i <= n; i++) {
            cout << V1[i] << ' ';
        }
        
        cout << endl;
    }
