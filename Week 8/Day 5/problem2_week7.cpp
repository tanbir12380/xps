#include <bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;
    while (a--) {
        long long int b;
        cin >> b;
        long long int c = 1;
        while (c <= b) {
            c *= 2;
        }
        c /= 2;

        deque<long long int> d;
        while (c > 0 && c != b) {
            if ((c | b) == b) {
                d.push_back(b ^ c);
            }
            c /= 2;
        }
        d.push_back(b);

        cout << d.size() << endl;
        for (int e = 0; e < d.size(); e++) {
            cout << d[e] << " ";
        }
        cout << endl;
    }
}
