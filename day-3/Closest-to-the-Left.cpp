#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (auto &i : a)
        cin >> i;

    for (ll i = 0; i < k; ++i)
    {
        ll x;
        cin >> x;
        auto it = upper_bound(a.begin(), a.end(), x);
        cout << it - a.begin() <<endl;
    }
}