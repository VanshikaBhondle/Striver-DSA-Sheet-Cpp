// longest consecutive sequence in an unsorted array
#include<bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& nums) {
    int n=nums.size();
    if(n==0){
        return 0;
    }
    int longest=-1;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    for(int i=0;i<n;i++){

        //A number is the start of a sequence only when its previous number is missing.
        // If nums[i] = 4, check if 3 exists.

//If 3 doesn't exist → 4 is the beginning of a new chain.
        if(s.find(nums[i]-1)==s.end()){
            int currnum=nums[i];
            int cnt=1;

// Does next number exist?

// If yes → extend the chain

// Keep increasing the count
            while(s.find(currnum+1)!=s.end()){
                currnum+=1;
                cnt+=1;
            }
            longest=max(longest,cnt);
        }
    }
    return longest;
}
int main(){
    vector<int>nums={102,4,100,1,1,101,3,2,1,1};
    cout<<longestConsecutive(nums)<<endl;
}