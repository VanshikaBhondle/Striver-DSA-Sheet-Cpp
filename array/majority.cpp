#include<bits/stdc++.h>
using namespace std;
int majorityElement(vector<int>& v) {
    unordered_map<int,int> mpp;
    for(int i=0;i<v.size();i++){
        mpp[v[i]]++;
        }
        for(auto it:mpp){
            if(it.second>v.size()/2){
                return it.first;
            }
        }
        return -1;
    }
    int main(){
        vector<int>v={3,2,3,3,4,3,5,3};
        cout<<majorityElement(v)<<endl;
    }