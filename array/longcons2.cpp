#include<bits/stdc++.h>
using namespace std;
int longestsuccessive(vector<int>& nums) {
    int n=nums.size();
    if(n==0){
        return 0;
    }
    int longest=-1;
    // Why use a set?

// It removes duplicates

// It gives O(1) search time

// We can quickly check if a number exists


    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    for(int i=0;i<n;i++){

//         Meaning:

// If current number is 3

// Check if 2 exists

// If 2 does NOT exist, that means 3 is the start of a sequence

// This avoids counting sequences multiple times.


        if(s.find(nums[i]-1)==s.end()){
            int currnum=nums[i];
            int cnt=1;
            while(s.find(currnum+1)!=s.end()){

//  Check if the next number exists

// Keep moving forward

// Increase count until there is no next numbe
                currnum+=1;
                cnt+=1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    vector<int>nums={100,4,200,1,3,2};
    cout<<longestsuccessive(nums);
    return 0;
}