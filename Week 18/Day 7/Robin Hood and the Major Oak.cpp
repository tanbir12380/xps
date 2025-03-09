#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n, k;
        cin >> n >> k;
        string s;
        
        if (n % 2) {
            if (k % 2) {
                k++;
            }
            if ((k / 2) % 2) {
                if (n % 2) {
                    s = "NO";
                } else {
                    s = "YES";
                }
            } else {
                if (n % 2) {
                    s = "YES";
                } else {
                    s = "NO";
                }
            }
            cout << s << "\n";
        } else {
            if (k % 2) {
                k--;
            }
            if ((k / 2) % 2) {
                if (n % 2 == 0) {
                    s = "NO";
                } else {
                    s = "YES";
                }
            } else {
                if (n % 2 == 0) {
                    s = "YES";
                } else {
                    s = "NO";
                }
            }
            cout << s << endl;
        }
    }
}