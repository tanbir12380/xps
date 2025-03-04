#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> V(n + 1, 0);
        for (int i = 1; i <= n; i++)
            cin >> V[i];

        int m;
        cin >> m;

        if (n == 2)
        {
            while (m--)
            {
                int x, y;
                cin >> x >> y;
                cout << "1" <<endl;
            }
            continue;
        }

        vector<int> d(n + 1);
        for (int i = 1; i < n; i++)
            d[i] = V[i + 1] - V[i];

        vector<int> V1(d), V2(d);

        for (int i = 2; i < n; i++)
        {
            if (d[i] < d[i - 1])
            {
                V1[i] = 1;
            }
            else
            {
                V2[i - 1] = 1;
            }
        }

        V1[1] = 1;
        V2[n - 1] = 1;

        for (int i = 1; i < n; i++)
            V1[i] += V1[i - 1];
        
        for (int i = 1; i < n; i++)
            V2[i] += V2[i - 1];

        while (m--)
        {
            int x, y;
            cin >> x >> y;
            int s;
            if (x < y)
            {
                s = V1[y - 1] - V1[x - 1];
            }
            else
            {
                s = V2[x - 1] - V2[y - 1];
            }
            cout << s << endl;
        }
    }

}
