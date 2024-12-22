#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;
        int v = 0;
        for(int i = 0; i < n; i++) {
            int a;
            cin >> a;
            a--;
            if(a % k != i % k) {
                v++;
            }
        }

        if(v == 0) {
            cout << "0" << endl;
        } else if(v == 2) {
            cout << "1" << endl;
        } else {
            cout << "-1" << endl;
        }
    }
}
