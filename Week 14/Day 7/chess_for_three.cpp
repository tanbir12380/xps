#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        if ((a + b + c) % 2) {
            cout << "-1"<< endl;
        } else if (c >= a + b) {
            cout << a + b << endl;
        } else {
            cout << (a + b + c) / 2 << endl;
        }
    }

}
