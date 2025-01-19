#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    
    while (t--) {
        long long int n, k;
        cin >> n >> k;
        
        vector<long long> v(k);
        for (int i = 0; i < k; i++) {
            cin >> v[i];
        }
        
        sort(v.begin(), v.end(), greater<long long>());
        
        int i = 0, c = 0;
        while (i < k && v[i] > c) {
            c += (n - v[i]);
            i++;
        }
        
        cout << i << endl;
    }
    
    return 0;
}
