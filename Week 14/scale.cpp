#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        
        for (int i = 0; i < n; i++) {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++) {
                if (i % k == 0 && j % k == 0) {
                    cout << s[j];
                }
            }
            if (i % k == 0) {
                cout << endl;
            }
        }
    }
}
