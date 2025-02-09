#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int A[n];
        int s = 0;
        for(int i = 1; i <= n; i++) {
            cin >> A[i];
            for(int j = 1; j < i; j++) {
                if (A[i] <= A[j]) {
                    s++;
                }
            }
        }
        cout << s << endl;
    }
}
