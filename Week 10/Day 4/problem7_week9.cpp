#include <iostream>
using namespace std;

int main() {
    long long l, r, p;
    cin >> l >> r;
    cout << "YES" << endl;
    for ( p = l; p <= r; p += 2) {
        cout << p << " " << p + 1 << endl;
    }

    return 0;
}
