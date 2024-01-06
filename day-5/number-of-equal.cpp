#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> v1, v2;

int main() {
    cin >> n >> m;
    v1.resize(n);
    for (auto &x : v1)
        cin >> x;
    v2.resize(m);
    for (auto &x : v2)
        cin >> x;

    int p1 = 0, p2 = 0;
    long long ans = 0;

    while (p1 < n && p2 < m) {
        if (v1[p1] == v2[p2]) {
            int num1 = 1, num2 = 1;
            ++p1;
            while (p1 < n && v1[p1] == v1[p1 - 1])
                ++num1, ++p1;
            ++p2;
            while (p2 < m && v2[p2] == v2[p2 - 1])
                ++num2, ++p2;
            ans += 1ll * num1 * num2;
        } else if (v1[p1] < v2[p2]) {
            ++p1;
            while (p1 < n && v1[p1] == v1[p1 - 1])
                ++p1;
        } else if (v1[p1] > v2[p2]) {
            ++p2;
            while (p2 < m && v2[p2] == v2[p2 - 1])
                ++p2;
        }
    }

    cout << ans << endl;
    return 0;
}
