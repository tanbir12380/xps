#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while (T--) {
        int n;
        cin >> n;
        
        int x, y;
        cin >> x >> y;
        
        int a = (n + y - 1) / y;
        int b = (n + x - 1) / x;
        int c = max(a, b);
        
        cout << c << endl;
    }
}
