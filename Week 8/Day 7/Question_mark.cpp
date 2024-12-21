#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0, d = 0;
        for (int p = 0; p < s.size(); p++) {
            if (s[p] == 'A') {
                a++;
            }
            if (s[p] == 'B') {
                b++;
            }
            if (s[p] == 'C') {
                c++;
            }
            if (s[p] == 'D') {
                d++;
            }
        }
        int total = min(a, n) + min(b, n) + min(c, n) + min(d, n);
        cout << total << endl;
    }
}
