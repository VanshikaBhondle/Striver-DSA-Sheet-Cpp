#include<bits/stdc++.h>
using namespace std;
vector<int> greaterpermutation(vector<int>& arr, int n) {
    int ind =-1;

    for(int i=n-2;i>=0;i--){
        if(arr[i]<arr[i+1]){
            ind=i;
            break;
        }
    }
    if(ind==-1){
        reverse(arr.begin(),arr.end());
        return arr;
    }
    for(int i=n-1;i>ind;i--){
        if(arr[i]>arr[ind]){
            swap(arr[i],arr[ind]);
            break;
        }
    }
    reverse(arr.begin()+ind+1,arr.end());
    return arr;
}
int main(){
    vector<int>arr={1,2,3,6,5,4};
    int n=arr.size();
    vector<int>result=greaterpermutation(arr,n);
    for(int i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
}