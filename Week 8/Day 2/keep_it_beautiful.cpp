#include <iostream>

using namespace std;

int main() {
    int t; 
    cin >> t;
    
    while (t--) {
        int n; 
        cin >> n;
        
        int a; 
        cin >> a; 
        cout << "1";
        
        int b = a; 
        bool c = false;
        
        for (int i = 1; i < n; i++) {
            long long x; 
            cin >> x;
            
            if (!c && x >= b) {
                cout << "1"; 
                b = x;
            } else if (!c) {
                if (x <= a) {
                    cout << "1"; 
                    c = true; 
                    b = x;
                } else {
                    cout << "0";
                }
            } else if (c) {
                if (b <= x && x <= a) {
                    cout << "1"; 
                    b = x;
                } else {
                    cout << "0";
                }
            }
        }
        
        cout << endl;
    }

    return 0;
}
