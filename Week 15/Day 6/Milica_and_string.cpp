#include<bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while (T--) {
    int b, c, e, f, g;
    string d;
        cin >> b >> c;
        cin >> d;
        
        e = 0;
        for (int i = 0; i < b; i++) {
            if (d[i] == 'B') {
                e++;
            }
        }
        
        if (e == c) {
            cout << 0 << endl;
        } else if (e > c) {
            f = e - c, g = 0;
            for (int i = 0; i < b; i++) {
                if (d[i] == 'B') {
                    g++;
                }
                if (g == f) {
                    cout << 1 << endl << i + 1 << ' ' << 'A' << endl;
                    break;
                }
            }
        } else {
            f = c - e, g = 0;
            for (int i = 0; i < b; i++) {
                if (d[i] == 'A') {
                    g++;
                }
                if (g == f) {
                    cout << 1 << endl << i + 1 << ' ' << 'B' << endl;
                    break;
                }
            }
        }
    }
}
