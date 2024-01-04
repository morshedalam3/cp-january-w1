#include<bits/stdc++.h>
using namespace std;

vector<int> mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2) {
    vector<int> result;
    int i = 0, j = 0;

    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            result.push_back(arr1[i]);
            i++;
        } else {
            result.push_back(arr2[j]);
            j++;
        }
    }

    // If there are remaining elements in arr1 or arr2, add them to the result
    while (i < arr1.size()) {
        result.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        result.push_back(arr2[j]);
        j++;
    }

    return result;
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

    vector<int> mergedArray = mergeSortedArrays(arr1, arr2);
    for (int num : mergedArray) {
        cout << num << " ";
    }

    return 0;
}
