#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while (T--) {
        int a, b, c, d;
        cin >> a >> b;
        vector<int> V(a + 1);
        
        for (int i = 1; i <= a; i++) {
            cin >> V[i];
        }
        
        c = 0;
        d = 0;
        
        for (int i = 1; i <= a; i++) {
            if (!d) {
                if (V[i] == V[1]) {
                 c++;
                 }
                if (c == b) {
                    d = 1;
                    c = 0;
                }
                continue;
            }
            if (V[i] == V[a]) {
            c++;
            }
        }
        
        if (V[1] == V[a]) {
            if (d) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        } else {
            if (d && c >= b) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    
    return 0;
}
