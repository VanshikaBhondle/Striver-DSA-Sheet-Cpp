#include<bits/stdc++.h>
using namespace std;    
vector<int> majorityElement(vector<int>v){
    int n=v.size();
    int count1=0,count2=0;
    int ele1=-1,ele2=-1;
    for(int i=0;i<n;i++){
        if(count1==0 && v[i]!=ele2){
            count1=1;
            ele1=v[i];
        }
        else if(count2==0 && v[i]!=ele1){
            count2=1;
            ele2=v[i];
        }
        else if(v[i]==ele1){
            count1++;
        }
        else if(v[i]==ele2){
            count2++;
        }
        else{
            count1--;
            count2--;
        }
    }
    vector<int>ans;
    count1=0;count2=0;
    for(int i=0;i<n;i++){
        if(v[i]==ele1) count1++;
        else if(v[i]==ele2) count2++;
    }
    if(count1>(n/3)) ans.push_back(ele1);
    if(count2>(n/3)) ans.push_back(ele2);
    return ans;
}
int main(){
    vector<int>v={1,1,1,3,3,2,2,2};
    vector<int>res=majorityElement(v);
    for(auto x:res){
        cout<<x<<" ";
    }       
    return 0;
}