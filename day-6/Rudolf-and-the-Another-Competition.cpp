#include <bits/stdc++.h>
using namespace std;

#define int long long int


int32_t main()
{
    int t;
    cin >> t;

    while (t--)
    {

        int n, m, h;
        cin >> n >> m >> h;

        vector<vector<int>> v(n, vector<int>(m));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
                cin >> v[i][j];
        }

        for (int i = 0; i < n; ++i)
        {
            sort(v[i].begin(), v[i].end());
        }

        vector<pair<pair<int, int>, int>> vp;

        for (int i = 0; i < n; ++i)
        {
            int sum = 0;
            vector<int> pref;
            int cnt = 0;
            for (int j = 0; j < m; ++j)
            {
                if (pref.empty())
                {
                    pref.push_back(v[i][j]);

                    if (pref.back() <= h)
                        ++cnt;
                    else
                        break;
                }
                else
                {
                    if (pref.back() + v[i][j] <= h)
                    {
                        pref.push_back(pref.back() + v[i][j]);
                        ++cnt;
                    }
                    else
                        break;
                }

                sum += pref.back();
            }

            vp.push_back({{cnt, sum}, i + 1});
        }

        sort(vp.begin(), vp.end(), [&](const auto &a, const auto &b)
             {
            if(a.first.first == b.first.first)
            {
                if(a.first.second == b.first.second)
                {
                    return a.second < b.second;
                }
                return a.first.second < b.first.second;
            }
            
            return a.first.first > b.first.first; });

        int ans = -1;

        for (int i = 0; i < n; ++i)
        {
            if (vp[i].second == 1)
                ans = i + 1;
        }

        cout << ans <<endl;
    }
    return 0;
}