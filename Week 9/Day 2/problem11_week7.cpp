#include <iostream>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        long long r = 0, x;
        cin >> n;
        while (n--) {
            cin >> x;
            r |= x;
        }
        cout << r << endl;
    }
    return 0;
}
