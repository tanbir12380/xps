#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long n, k;
    cin >> n >> k;
    
    int s = 0;
    
    for (int i = 1; i <= n; i++) {
        s += i;
        if (s - (n - i) == k) {
            cout << (n - i) << endl;
            return 0;
        }
    }
    
    return 0;
}
