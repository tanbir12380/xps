#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int a = 0, b = 0, c = 0;
        while (a < n && b < m) {
            if (s1[a] == s2[b]) {
                a++;
                b++;
                c++;
            } else {
                b++;
            }
        }
        cout << c << endl;
    }
}
