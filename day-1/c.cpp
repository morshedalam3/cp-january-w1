#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    while (t--)
    {

        int n, m;

        cin >> n >> m;

        string str;

        vector<vector<char>> v(n, vector<char>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cin >> v[i][j];
        }

        string have = "vika";

        int k = 0;

        for (int i = 0; i < m; ++i)
        {

            for (int j = 0; j < n; ++j)
            {
                char ch = v[j][i];
                if (ch == have[k])
                {
                    ++k;
                    break;
                }
            }
            if (k == 4)
                break;
        }

        if (k == 4)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}