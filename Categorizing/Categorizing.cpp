#include <iostream>
#include <vector>
using namespace std;

// Selection Sort (Descending)
void sortSelectionDesc(vector<int>& arr, int len) {
    for (int i = 0; i < len - 1; i++) {
        int pos = i;
        for (int j = i + 1; j < len; j++) {
            if (arr[j] > arr[pos]) {
                pos = j;
            }
        }
        swap(arr[i], arr[pos]);
    }
}

// Merge two halves for Merge Sort (Ascending)
void combine(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp;
    int p1 = left;
    int p2 = mid + 1;

    while (p1 <= mid && p2 <= right) {
        if (arr[p1] < arr[p2])
            temp.push_back(arr[p1++]);
        else
            temp.push_back(arr[p2++]);
    }

    while (p1 <= mid)
        temp.push_back(arr[p1++]);
    while (p2 <= right)
        temp.push_back(arr[p2++]);

    for (int i = 0; i < temp.size(); i++)
        arr[left + i] = temp[i];
}

// Merge Sort (Ascending)
void sortMergeAsc(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = (left + right) / 2;
    sortMergeAsc(arr, left, mid);
    sortMergeAsc(arr, mid + 1, right);
    combine(arr, left, mid, right);
}

// Linear Search
int findLinear(const vector<int>& arr, int n) {
    int key;
    cout << "\nEnter value to find: ";
    cin >> key;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Binary Search (Recursive)
int findBinary(const vector<int>& arr, int start, int end, int key) {
    if (start > end) return -1;

    int mid = start + (end - start) / 2;
    if (arr[mid] == key) return mid;
    if (key < arr[mid])
        return findBinary(arr, start, mid - 1, key);
    else
        return findBinary(arr, mid + 1, end, key);
}
