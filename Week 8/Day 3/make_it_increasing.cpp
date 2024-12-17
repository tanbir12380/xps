#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int count = 0;
        bool pos = true;
        for (int i = n - 2; i >= 0 && pos; i--) {
            if(arr[i]>=arr[i+1] && arr[i+1]>0)
            while (arr[i] >= arr[i + 1]) {
                arr[i] /= 2;
                count++;
            }
            
            else if(arr[i+1]<=0) {
                count = -1;
                pos = false;
                break;
            }
        }
        if (pos) {
            cout << count << endl;
        } else {
            cout << -1 << endl;
        }
    }
    return 0;
}
