#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto &i : a)
        cin >> i;
    for (int i = 0; i < k; ++i)
    {
        int x;
        cin >> x;
 
        auto it = lower_bound(a.begin(), a.end(), x);
        cout << it - a.begin() + 1 <<endl;
    }
}
