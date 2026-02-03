#include<bits/stdc++.h>
using namespace std;
vector<int> rearrange(vector<int>& arr, int n) {
    vector<int>ans(n,0);
    int posindex=0;
    int negindex=1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            ans[posindex]=arr[i];
            posindex+=2;
        }
        else{
            ans[negindex]=arr[i];
            negindex+=2;
        }
    }
    return ans;
}
int main(){
    vector<int>arr={3,2,5,-1,6,-3,-2,-4};
    int n=arr.size();
   vector<int>result=rearrange(arr,n);
   for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
   }

}