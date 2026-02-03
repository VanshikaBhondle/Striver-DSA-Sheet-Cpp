#include<bits/stdc++.h>
using namespace std;

int subarrayWithSumK(vector<int>& arr, int n, int k) {

    unordered_map<int, int> mpp;
    mpp[0] = 1;       // prefix sum 0 occurs once

    int presum = 0;
    int cnt = 0;

    for(int i = 0; i < n; i++) {

        presum += arr[i];

        int remove = presum - k;

        // if (presum - k) exists, add its frequency
        if(mpp.find(remove) != mpp.end()) {
            cnt += mpp[remove];
        }

        // increase frequency of current prefix sum
        mpp[presum]++;
    }

    return cnt;
}

int main() {
    vector<int> arr = {1,2,3,-3,1,1,1,4,2,-3};
    int n = arr.size();
    int k = 3;

    int res = subarrayWithSumK(arr, n, k);

    cout << "Number of subarrays with sum " << k << " is: " << res << endl;

    return 0;
}
