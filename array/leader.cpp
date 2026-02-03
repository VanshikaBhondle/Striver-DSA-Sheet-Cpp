#include<bits/stdc++.h>
using namespace std;
vector<int>leader(vector<int>&arr){
    vector<int>ans;
    int maxi=INT_MIN;
    int n=arr.size();
    for(int i=n-1;i>=0;i--){
        if(arr[i]>maxi){
            ans.push_back(arr[i]);
        }
            maxi=max(maxi,arr[i]);
        }
        sort(ans.begin(),ans.end());
        return ans;     
    
    }
    int main(){
        vector<int>arr={10,22,12,3,0,6};
        vector<int>result=leader(arr);
        for(int i=0;i<result.size();i++){
            cout<<result[i]<<" ";
        }
    }
    
