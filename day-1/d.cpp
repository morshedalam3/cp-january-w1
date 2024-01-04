#include<bits/stdc++.h>
using namespace std;

int longestGoodSegment(int n, long long s, const vector<int>& arr) {
    int left = 0, right = 0, maxLength = 0;
    long long currentSum = 0;

    while (right < n) {
        currentSum += arr[right];

        while (currentSum > s) {
            currentSum -= arr[left];
            left++;
        }
        maxLength = max(maxLength, right - left + 1);

        right++;
    }

    return maxLength;
}

int main() {
    int n;
    long long s;
  cin >> n >> s;

  vector<int> arr(n);
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
    }
    int result = longestGoodSegment(n, s, arr);

  cout << result << endl;

    return 0;
}
