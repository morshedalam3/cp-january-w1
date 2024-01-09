#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main()
  {
    
    int t;
    cin>>t;
    while(t--){;
        ll x;
        cin>>x;
        vector < ll > a;
        a.push_back(x);
        while (__builtin_popcount(x) > 1){ 
          ll p = __builtin_ctz(x); 
          x -= (1 << p); 
          a.push_back(x);
        }
        while (x > 1){
          x /= 2;
          a.push_back(x);
        }
        ll k = (ll)a.size();
        cout<<k<<endl;
        for (ll i = 0; i < k; i++){
          cout<<a[i]<<" ";
        }
        cout<<endl;
    }       
    return 0;
}