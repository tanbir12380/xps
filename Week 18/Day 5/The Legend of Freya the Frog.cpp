#include <bits/stdc++.h>
using namespace std;

int main() {

    int T;
    cin >> T;
    
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;
        
        int x = a / c;
        if (a % c != 0) {
            x++;
        }
        x *= 2;
        x--;
        
        int y = b / c;
        y *= 2;
        if (b % c != 0) {
            y += 2;
        }
        
        int z = max(x, y);
        cout << z << endl;
    }
}
