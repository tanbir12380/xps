#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    while (T--) {
        int x, k;
        cin >> x >> k;
        for (int i = 0; i < x; i++) {
            for (int j = 0; j < k; j++) {
                cout << (char)(j + 'a');
            }
        }
        cout << endl;
    }
}
