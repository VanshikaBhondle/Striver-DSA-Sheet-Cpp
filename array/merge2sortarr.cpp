#include<bits/stdc++.h>
using namespace std;
void merge(long long arr1[],long long arr2[],int n,int m, vector<long long>& merged){
    int i=0, j=0;
    while(i<n && j<m){
        if(arr1[i] <= arr2[j]){
            merged.push_back(arr1[i++]);
        } else {
            merged.push_back(arr2[j++]);
        }
    }
    while(i<n) merged.push_back(arr1[i++]);
    while(j<m) merged.push_back(arr2[j++]);
}
int main(){
    long long arr1[]={1,3,5,7};
    long long arr2[]={0,2,6,8,9};
    int n=sizeof(arr1)/sizeof(arr1[0]);

    int m= sizeof(arr2)/sizeof(arr2[0]);
    vector<long long> merged;
    cout<<"Before merge:"<<endl;
    cout<<"arr1: ";
    for(int i=0;i<n;i++) cout<<arr1[i]<<" ";
    cout<<endl;
    cout<<"arr2: ";
    for(int i=0;i<m;i++) cout<<arr2[i]<<" ";
    cout<<endl;
    merge(arr1,arr2,n,m,merged);
    cout<<"Merged array: ";
    for(auto x: merged) cout<<x<<" ";
    cout<<endl;
    return 0;
}