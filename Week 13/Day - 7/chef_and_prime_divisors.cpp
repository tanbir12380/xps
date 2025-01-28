#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) 
{
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() 
{

    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        
        long long c = gcd(a, b);
        while (c > 1) {
            b /= c;
            c = gcd(a, b);
        }

        if (b == 1) {
            cout << "Yes"<< endl;
        } else {
            cout << "No"<< endl;
        }
    }

    return 0;
}
