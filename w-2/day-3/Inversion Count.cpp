#include <bits/stdc++.h>
using namespace std;
#define MAXN 200000

int a[MAXN], b[MAXN];
int bit[MAXN + 1];

int main()
{
    int T, N;

    cin >> T;

    while (T--)
    {
        cin >> N;

        for (int i = 0; i < N; ++i)
        {
            cin >> a[i];
            b[i] = a[i];
        }

        sort(b, b + N);
        int m = unique(b, b + N) - b;

        memset(bit, 0, sizeof bit);
        long long ans = 0;

        for (int i = 0; i < N; ++i)
        {
            a[i] = 1 + (lower_bound(b, b + m, a[i]) - b);
            ans += i;

            for (int x = a[i]; x > 0; x -= x & -x)
                ans -= bit[x];

            for (int x = a[i]; x <= MAXN; x += x & -x)
                ++bit[x];
        }

        cout << ans << endl;
    }

    return 0;
}

// https://www.spoj.com/problems/INVCNT/