#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>foursum(vector<int>&nums,int target){
    int n=nums.size();
    set<vector<int>>st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            set<long long>hashset;
            for(int k=j+1;k<n;k++){
                long long sum= nums[i]+nums[j];
                sum +=nums[k];
                if(hashset.find(fourth)!=hashset.end()){
                    vector<int>temp={nums[i],nums[j],nums[k],nums[l]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
                hashset.insert(nums[k]);
            }
        }
    }
    vector<vector<int>>ans(st.begin(),st.end());
    return ans;
}
int main(){
    vector<int>nums={1,1,1,2,2,2,3,3,3,4,4,4,5,5};
    int target=8;
    vector<vector<int>>res=foursum(nums,target);
        for (auto &triplet : res) {
        for (auto &num : triplet) cout << num << " ";
        cout << endl;
    }
    return 0;
    }
