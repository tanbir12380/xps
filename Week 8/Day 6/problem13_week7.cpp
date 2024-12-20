#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        vector<int> b(70, 0);
        int c;
        cin >> c;
        long long d = 0;
        for (int e = 0; e < c; e++) {
            long long f;
            cin >> f;
            int g = 0;
            while (f > 1) {
                f /= 2;
                g++;
            }
            d += b[g];
            b[g]++;
        }
        cout << d << endl;
    }
    return 0;
}
