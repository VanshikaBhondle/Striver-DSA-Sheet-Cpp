
// Apply merge sort recursively to divide the array into two halves.
// During the merge step:
// If arr[left] <= arr[right], place arr[left] into the temp array and move left++.
// Otherwise, place arr[right] into the temp array. Since arr[left] > arr[right], all elements from arr[left] to arr[mid] form inversions with arr[right]. So add (mid - left + 1) to the inversion count.
// Copy the merged elements back into the original array.
// The total inversion count is the sum of:
// Inversions in the left half
// Inversions in the right half
// Inversions across the halves (counted during merge)
#include <bits/stdc++.h>
using namespace std;

// Function to merge two halves and count inversions
int merge(vector<int> &arr, int low, int mid, int high) {
    // Temporary array to store merged elements
    vector<int> temp;

    // Starting index of left half
    int left = low;
    // Starting index of right half
    int right = mid + 1;

    // Variable to count inversions
    int cnt = 0;

    // Merge elements in sorted order and count inversions
    while (left <= mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        } else {
            temp.push_back(arr[right]);
            cnt += (mid - left + 1); // All remaining left elements are inversions
            right++;
        }
    }

    // If left half still has elements
    while (left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    // If right half still has elements
    while (right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    // Copy back to original array
    for (int i = low; i <= high; i++) {
        arr[i] = temp[i - low];
    }

    // Return inversion count
    return cnt;
}

// Merge sort function that counts inversions
int mergeSort(vector<int> &arr, int low, int high) {
    // Variable to store inversion count
    int cnt = 0;

    // Base case
    if (low >= high) return cnt;

    int mid = (low + high) / 2;

    // Count inversions in left half
    cnt += mergeSort(arr, low, mid);
    // Count inversions in right half
    cnt += mergeSort(arr, mid + 1, high);
    // Count inversions during merge
    cnt += merge(arr, low, mid, high);

    return cnt;
}

// Function to get number of inversions
int numberOfInversions(vector<int>& a, int n) {
    return mergeSort(a, 0, n - 1);
}

int main() {
    // Input array
    vector<int> a = {5, 4, 3, 2, 1};
    int n = a.size();

    // Count inversions
    int cnt = numberOfInversions(a, n);

    cout << "The number of inversions are: " << cnt << endl;

    return 0;
}