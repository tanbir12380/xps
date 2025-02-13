#include <bits/stdc++.h>
using namespace std;
int main() {

    int T; 
    cin >> T;
    while(T--) {
        long long a, b; 
        cin >> a >> b;
        if((a + b) % 2 == 0) {
            cout << "Bob" << endl;
        }
        else {
            cout << "Alice" << endl;
        }
    }
}
