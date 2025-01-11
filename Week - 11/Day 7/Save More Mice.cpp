#include<bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {

        long long n, k, c = 0, d = 0; 
        cin >> n >> k;
        vector<long long> v(k);
        
        for (int i = 0; i < k; i++) {
            long long x; 
            cin >> x;
            v[i] = x;
        }
        
        sort(v.begin(), v.end());

        while (d < v[k - 1]) {
            d += (n - v[k - 1]);
            c++;
            v.pop_back();
            k--;
            if (k == 0 || v.empty()) {
                break;
            }
        }

        cout << c << endl;
    }

    return 0;
}