#include <iostream>
using namespace std;

int main() {
    long t;
    cin >> t;
    while (t--) {
        int n, k ,r , a, b, c ;
        cin >> n >> k;
        a = 1, b = 0;
        for (int i = 0; i < n; ++i) {
            cin >> c;
            if (c == a) {
                a++;
            } else {
                b++;
            }
        }
        r = b + k ;
        r--;
        cout << r / k << endl;
    }
}
