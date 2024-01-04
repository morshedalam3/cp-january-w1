#include<bits/stdc++.h>
using namespace std;
int countElementsStrictlyLess(const std::vector<int>& arr, int x) {
    int low = 0, high = arr.size() - 1, result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] < x) {
            result = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    return result + 1;
}


vector<int> countElementsLessThan(const vector<int>& arr1, const std::vector<int>& arr2) {
    vector<int> counts;

    for (int x : arr2) {
        int count = countElementsStrictlyLess(arr1, x);
        counts.push_back(count);
    }

    return counts;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    vector<int> arr2(m);
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }

    vector<int> result = countElementsLessThan(arr1, arr2);

    for (int count : result) {
        cout << count << " ";
    }

    return 0;
}

