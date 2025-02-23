#include <bits/stdc++.h>
using namespace std;

int main() {

    
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == b[i]) {
                continue;
            } else if (a[i] == '1' && b[i] == '0') {
                x++;
            } else {
                y++;
            }
        }
        cout << max(x, y) << endl;
    }
}
