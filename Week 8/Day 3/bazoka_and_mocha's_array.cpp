#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        int b = 0;
        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                b = i;
            }
        }

        int c = a[b];
        bool d = true;
        for (int i = 1; i < n; i++) {
            if (d) {
                int e = (i + b) % n;
                if (c > a[e]) {
                    d = false;
                }
                c = a[e];
            }
        }

        if (d) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
