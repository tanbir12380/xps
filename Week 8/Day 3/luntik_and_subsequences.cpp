#include <iostream>
using namespace std;

long long p(int b, int e) {
    long long r = 1;
    for (int i = 0; i < e; i++) {
        r *= b;
    }
    return r;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, c = 0, d = 0;
        cin >> n;
        for (int i = 0; i < n; i++) {
            int f;
            cin >> f;
            if (f == 0) {
                d++;
            } else if (f == 1) {
                c++;
            }
        }
        long long r = p(2, d) * c;
        cout << r << endl;
    }
    return 0;
}
