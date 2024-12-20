#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        int b;
        long long int c;
        cin >> b >> c;
        for (int d = 1; d < b; d++) {
            long long int e;
            cin >> e;
            c &= e;
        }
        cout << c << endl;
    }
    return 0;
}
