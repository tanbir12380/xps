#include <iostream>

using namespace std;

int main() 
{
    int t; 
    cin >> t;
    while (t--) 
    {
        long long n; 
        cin >> n;
        int x = 1; 
        while (2 * x <= n) 
        { 
            x *= 2; 
        }
        x--;
        cout << x << endl;
    }
}
