#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;
const int MAXN = 1e5 + 5;

int n, k;
vector<int> v;
int Tms[MAXN];

int main() {
    cin >> n >> k;
    v.resize(n);
    for (auto &x : v)
        cin >> x;

    long long ans = 0;
    int l = 0, num = 0;

    for (int i = 0; i < n; ++i) {
        if (!Tms[v[i]]++) {
            if (++num > k) {
                while (true)
                    if (--Tms[v[l++]] == 0)
                        break;
            }
        }
        ans += i - l + 1;
    }

    cout << ans << endl;
    return 0;
}
