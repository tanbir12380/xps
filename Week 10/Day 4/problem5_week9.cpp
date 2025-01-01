#include <iostream>
using namespace std;

int main() {
    int m = 1000000007;
    int t;
    cin >> t;
    while (t--) {
        int b;
        cin >> b;
        long long result = 1;
        for (int a = 2; a <= b; a++) {
            result = (result * a) % m;
        }
        cout << result << endl;
    }
    return 0;
}