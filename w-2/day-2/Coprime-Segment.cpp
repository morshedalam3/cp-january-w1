#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n;
vector<ll> v;

struct Stack
{
    vector<ll> st, val = {0};
    void push(ll x)
    {
        st.push_back(x);
        val.push_back(__gcd(val.back(), x));
    }
    ll top()
    {
        return val.back();
    }
    ll pop()
    {
        ll x = st.back();
        st.pop_back();
        val.pop_back();
        return x;
    }
    bool empty()
    {
        return st.empty();
    }
} s1, s2;

void remove()
{
    if (s1.empty())
    {
        while (!s2.empty())
            s1.push(s2.pop());
    }
    s1.pop();
}

int main()
{
    scanf("%d", &n);
    v.resize(n);
    for (auto &x : v)
        scanf("%lld", &x);
    int l = 0, ans = n + 1;
    for (int i = 0; i < n; ++i)
    {
        s2.push(v[i]);
        while (__gcd(s1.top(), s2.top()) == 1)
        {
            remove();
            ans = min(ans, i - l + 1);
            l++;
        }
    }
    if (ans > n)
        ans = -1;
    printf("%d\n", ans);
    return 0;
}