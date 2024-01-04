#include<bits/stdc++.h>
using namespace std;

int shortestGoodSegment(int n, long long s, const vector<int>& arr) {
    int left = 0, right = 0, minLength = INT_MAX;
    long long currentSum = 0;

    while (right < n) {
        currentSum += arr[right];

        while (currentSum >= s) {
            minLength = min(minLength, right - left + 1);
            currentSum -= arr[left];
            left++;
        }
        right++;
    }

    return (minLength == INT_MAX) ? -1 : minLength;
}

int main() {
    int n;
    long long s;
    cin >> n >> s;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = shortestGoodSegment(n, s, arr);
    cout << result << endl;

    return 0;
}
