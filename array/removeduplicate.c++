#include <iostream>
#include <set>
using namespace std;
// using set
// int removeDuplicates(int arr[], int n) {
//     set<int> s;

//     // insert elements into set
//     for (int i = 0; i < n; i++) {
//         s.insert(arr[i]);
//     }

//     // copy back to array
//     int index = 0;
//     for (int x : s) {
//         arr[index++] = x;
//     }

//     return index; // number of unique elements
// }

int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int i = 0; // index of last unique element

    for (int j = 1; j < n; j++) {   //2 pointer approach
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    return i + 1; // number of unique elements
}

int main() {
    int arr[] = {1, 1, 2, 2, 3, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    int k = removeDuplicates(arr, n);

    cout << "Unique elements count: " << k << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < k; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
