#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;

    long long b = 0, d = 1;
    for (int i = 0; i < a.size(); i++) {
        d *= 2;
    }

    for (int i = 0; i < a.size(); i++) {
        int x = (a[i] == '7');
        b = b * 2 + x;
    }

    cout << d - 1 + b << endl;

    return 0;
}
