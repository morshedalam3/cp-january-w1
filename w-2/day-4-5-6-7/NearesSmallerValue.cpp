#include <bits/stdc++.h>
using namespace std;

const int maxN = 2e5 + 1;
int N, x[maxN], ds[maxN];

int main()
{
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> x[i];
        int k = i - 1;
        while (x[k] >= x[i])
            k = ds[k];
        ds[i] = k;
        cout << ds[i] << ((i == N) ? "\n" : " ");
    }
}
