#include<bits/stdc++.h>
using namespace std;    
vector<int> majorityElement(vector<int>v){
    vector<int>ls;
    map<int,int>mpp;
    int n=v.size();
    int mini=(n/3)+1;

    for(int i=0;i<n;i++){
        mpp[v[i]]++;

        if(mpp[v[i]]==mini){
            ls.push_back(v[i]);
        }

        if(ls.size()==2)
            break;
        }   

        sort(ls.begin(),ls.end());
        return ls;
    }

int main(){
    vector<int>v={1,1,1,3,3,2,2,2};
    vector<int>res=majorityElement(v);
    for(auto x:res){
        cout<<x<<" ";
    }
    return 0;
}
