#include<bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int T;
    cin >> T;
    
    while (T--) {
        int a, b, c;
        cin >> a >> b;
        vector<int> V(a + 1);
        
        for (int i = 1; i <= a; i++) {
            cin >> V[i];
        }
        
        c = (b - V[a]) * 2;
        
        for (int i = 1; i <= a; i++) {
            c = max(c, V[i] - V[i - 1]);
        }
        
        cout << c << endl;
    }
}
