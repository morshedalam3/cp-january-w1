#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define float double

// Function to find the floor square root using binary search
ll bs_sqrt(ll x)
{
    ll left = 0, right = 2000000123;
    while (right > left)
    {
        ll mid = (left + right) / 2;
        if (mid * mid > x)
            right = mid;
        else
            left = mid + 1;
    }
    return left - 1;
}

int main()
{

    ll test;
    cin >> test;
    while (test--)
    {
        ll n;
        cin >> n;
        vector<ll> v(n - 1);
        ll maxi = 0;
        bool flag1 = 0;

        for (auto &it : v)
        {
            cin >> it;
            if (it <= maxi)
            {
                flag1 = 1;
            }
            maxi = max(maxi, it);
        }

        if ((maxi > (n * 1ll * (n + 1) / 2)) || flag1)
        {
            cout << "NO\n";
            continue;
        }
        unordered_map<ll,ll>mp;
        if (v[v.size()-1]!=(n*(n+1)/2))
        {
            if (v[0]<=0 && v[0]>n)
            {
                cout<<"NO\n";
                continue;
            }
            v.push_back(n*(n+1)/2);
            mp[v[0]]=1;
            bool flag=1;
            for(int i=1;i<v.size();i++)
            {
                ll num=v[i]-v[i-1];
                if(num<=0 || num>n || mp.count(num)!=0)
                {
                    cout<<"NO\n";
                    flag=0;
                    break;
                }
                else
                {
                    mp[num]=1;
                }
            }
            if (flag && mp.size()!=n)
            {
                cout<<"NO\n";
            }
            else if (flag && mp.size()==n)
            {
                cout<<"YES\n";
            }
        }
        else
        {
            ll sum=n*(n+1)/2;
            vector<ll>temp;
            for(int i=1;i<v.size();i++)
            {
                ll num=v[i]-v[i-1];
                if (mp.count(num)==0 && num>0 && num<=n)
                {
                    mp[num]=1;
                    sum-=num;
                }
                else
                {
                    temp.push_back(num);
                }
            }
            if (temp.size()==0 && mp.size()==n-2 && sum==v[0])
            {
                cout<<"YES\n";
            }
            else if (temp.size()==1 && mp.size()==n-3)
            {
                if (mp.count(v[0])==1 || v[0]>n || v[0]<=0)
                {
                    cout<<"NO\n";
                }
                else if (sum-v[0]==temp[0])
                {
                    cout<<"YES\n";
                }
            }
            else
            {
                cout<<"NO\n";
            }
        }

    }
    return 0;
}