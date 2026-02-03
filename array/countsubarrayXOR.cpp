// arr[]={4,2,2,6,4};
//k=6 after xoring it give 6 

// Initialize a hashmap to store how many times each prefix XOR has appeared.
// Keep a variable to store the current prefix XOR as we move through the array.
// Keep another variable to count the total number of subarrays with XOR equal to k.
// For each element in the array, update the prefix XOR by combining it with the current element.
// If the prefix XOR itself is equal to k, increase the count by one.
// Check if there exists a prefix XOR seen before that can make the subarray XOR equal to k, and if yes, add its frequency from the hashmap to the count.
// Store or update the frequency of the current prefix XOR in the hashmap.
// After processing all elements, the count will be the total number of subarrays with XOR equal to k
#include<bits/stdc++.h>
using namespace std;
class subarraysum{
    public:
int subarraywithsumK(vector<int>a,int k,int n){
    int xr=0;
    map<int,int>mpp;
    mpp[xr]++; //{0,1} initially 
    int count=0;
    for(int i=0;i<n;i++){
        xr=xr^a[i];
        // compute required XOR
        // if x exists in map, it means:

        // There is a subarray ending at index i with XOR = k
        int x=xr^k;
//👉 x is the REQUIRED previous prefix XOR value needed to form a subarray whose XOR is k.
        count+=mpp[x];//Add how many times x appeared before.Each occurrence gives one valid subarray
        mpp[xr]++;// Store/update current prefix XOR for future use


    }
    return count;
}
};
int main(){
    vector<int>a={4,2,2,6,4};
    int k=6;
    int n=a.size();
subarraysum obj;
    int ans=obj.subarraywithsumK(a,k,n);
    cout<<ans<<endl;
    return 0;

}
