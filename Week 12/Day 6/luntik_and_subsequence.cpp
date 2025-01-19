#include<bits/stdc++.h>
using namespace std;
int main() {
     int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n);
        long long a = 0, b = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 0) {
            a++;
            }
            if (v[i] == 1) {
            b++;
            }
        }
        long long c = (1LL << a);
        long long d = c * b;
        cout << d << endl;
    }
}
