#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        int x;
        cin >> x;
        
        int A = 0, B = 0, C = 0;
        
        while ((1 << C) <= x) {
            C++;
        }

        int M = 1 << (C - 1);
        A = M;
        B = A ^ x;
        
        cout << B << ' ' << A << endl;
    }
    
    return 0;
}
