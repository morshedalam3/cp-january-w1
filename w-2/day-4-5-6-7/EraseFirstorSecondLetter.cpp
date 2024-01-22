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
        string s;
        cin >> s;

        set<int> st;

        int cnt = 0;

        for (auto e : s)
        {
            st.insert(e);
            cnt += st.size();
        }

        cout << cnt << endl;
    }
}
