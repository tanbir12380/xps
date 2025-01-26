#include <bits/stdc++.h>
using namespace std;

int main() {

    int t; 
    cin >> t;
    while (t--) {
        string a, b; 
        cin >> a >> b;
        int c = b.size();
        int d = a.size();
        sort(a.begin(), a.end());
        bool e = false;
        for (int i = 0; i <= c - d; i++) {
            string f = b.substr(i, d);
            sort(f.begin(), f.end());
            if (a == f) {
                e = true;
            }
        }
        if (e) {
            cout << "YES\n";
        }
        else {
            cout << "NO\n";
        }
    }
}
