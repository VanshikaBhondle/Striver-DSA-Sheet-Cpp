#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& a, long long k) {
    unordered_map<long long, int> presumMap;
    long long sum = 0;
    int maxlen = 0;

    for (int i = 0; i < a.size(); i++) {
        sum += a[i];

        // Case 1: prefix sum itself equals k
        if (sum == k) {
            maxlen = max(maxlen, i + 1);
        }

        // Case 2: remaining sum exists
        long long rem = sum - k;
        if (presumMap.find(rem) != presumMap.end()) {
            int len = i - presumMap[rem];
            maxlen = max(maxlen, len);
        }

        // Store first occurrence only
        if (presumMap.find(sum) == presumMap.end()) {
            presumMap[sum] = i;
        }
    }

    return maxlen;
}
int main() {
    vector<int> a = {1,2,3,1,1,1,1};
    long long k = 3;
    cout << longestSubarrayWithSumK(a, k);
    return 0;
}
