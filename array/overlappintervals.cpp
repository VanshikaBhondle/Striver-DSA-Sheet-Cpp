#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> mergeoverlapinterval(vector<vector<int>>& arr) {
    int n = arr.size();
    sort(arr.begin(), arr.end());  // sort by start time

    vector<vector<int>> ans;

    for(int i = 0; i < n; i++) {
        // if no overlap, push interval
        if(ans.empty() || arr[i][0] > ans.back()[1]) {
            ans.push_back(arr[i]);
        }
        // overlap found, merge
        else {
            ans.back()[1] = max(ans.back()[1], arr[i][1]);
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> arr = {{1,3},{2,6},{9,11},{8,10},{2,4},{15,18},{16,17}};
   
    vector<vector<int>> result = mergeoverlapinterval(arr);

    for (auto v : result) {
        cout << "[" << v[0] << ", " << v[1] << "] ";
    }
    return 0;
}
