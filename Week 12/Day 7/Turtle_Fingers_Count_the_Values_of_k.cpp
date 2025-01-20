#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int a, b, g; 
        cin >> a >> b >> g;
        int d = 1; 
        set<int> s;

        while (g % d == 0) {
            int c = g / d;
            s.insert(c);
            while (c % a == 0) {
                s.insert(c / a); 
                c /= a;
            }
            d *= b;
        }

        cout << s.size() << endl;
    }

    return 0;
}
