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

        vector<int> v(n);
        for (int i = 0; i < n; ++i)
            cin >> v[i];
        sort(v.begin(), v.end());

        int s = 1;
        bool one = true;
        if (v[0] != 1)
        {
            cout << "NO" << endl;
            continue;
        }
        for (int i = 1; i < n; ++i)
        {
            if (v[i] <= s)
            {
                s += v[i];
            }
            else
            {
                one = false;
                break;
            }
        }

        if (one)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}