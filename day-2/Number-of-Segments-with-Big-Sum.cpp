#include<bits/stdc++.h>
using namespace std;
long long countGoodSegments(int n, long long s, const vector<int>& arr) {
    long long count = 0;
    int left = 0, right = 0;
    long long currentSum = 0;

    while (right < n) {
        currentSum += arr[right];

        while (currentSum >= s) {
            count += n - right;
            currentSum -= arr[left];
            left++;
        }
        right++;
    }

    return count;
}

int main() {
    int n;
    long long s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    long long result = countGoodSegments(n, s, arr);
    cout << result << endl;

    return 0;
}
