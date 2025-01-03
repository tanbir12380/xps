#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long a, b, x, y, z;
        cin >> a >> b;

        if (b == 1) {
            cout << "NO" << endl;
            continue;
        }

        cout << "YES" << endl;
        x = a;
        y = a * b;    
        z = a * (b + 1);
        cout << x << " " << y << " " << z << endl;
    }

    return 0;
}
