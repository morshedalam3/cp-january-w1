// link: https://codeforces.com/contest/1839/problem/C
#include<bits/stdc++.h>
using  namespace  std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n+3];
        for(int i=1;i<=n;i++)
        {
            cin>>ar[i];
        }
        vector<int>ans;
        if(ar[n]==1)cout<<"NO"<<endl;
        else
        {
            cout<<"YES"<<endl;
            for(int i=n;i>0;i--)
            {
                vector<int>v;
                if(i==1)
                {
                    if(ar[i]==0)ans.push_back(0);
                }
                else
                {
                    if(ar[i]==0 && ar[i-1]==1)
                    {
                        v.push_back(0);
                        v.push_back(1);
                        i-=2;
                        while(i>0 && ar[i]==1)
                        {
                            v.push_back(1);
                            i--;
                        }
                        i++;
                        for(int j=1;j<v.size();j++)ans.push_back(0);
                        ans.push_back(v.size()-1);
                    }
                    else ans.push_back(0);
                }

            }
            for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
            cout<<endl;
        }
    }
}
