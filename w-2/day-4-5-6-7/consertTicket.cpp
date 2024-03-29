#include <bits/stdc++.h>
using namespace std;

#define lli long long int
#define li long int
#define ld long double
const lli mod = 1e9 + 7;

int main()
{

    lli n, m, curr, ticket;
    cin >> n >> m;
    multiset<lli, greater<int>> tickets;

    while (n--)
    {
        cin >> ticket;
        tickets.insert(ticket);
    }

    while (m--)
    {
        cin >> curr;
        auto it = tickets.lower_bound(curr);
        if (it == tickets.end())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << *it << endl;
            tickets.erase(it);
        }
    }
    return 0;
}