#include <bits/stdc++.h>
using namespace std;

int n;
long long s;
vector<int> v;

int main() {
    cin>>n>>s;
    v.resize(n);
    for (auto &x : v)cin>>x;
    int l = 0;
    long long sum = 0, ans = 0;
    for (int i = 0; i < v.size(); ++i) {
        sum += v[i];
        while (sum >= s) sum -= v[l++];
        ans += l;
    }
cout<<ans<<endl;
    return 0;
}