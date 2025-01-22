#include <bits/stdc++.h>
using namespace std;

const int ms = 100000;

int main() {
    int n, x, a = 1, b;
    cin >> n;

    vector<int> V(ms + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> x;
        V[x]++;
    }

    for (int i = 2; i <= ms; i++) {
        b = 0;
        for (int j = i; j <= ms; j += i) {
            b += V[j];
        }
        a = max(a, b);
    }

    cout << a << endl;
    return 0;
}
