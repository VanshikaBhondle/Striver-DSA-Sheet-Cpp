#include <bits/stdc++.h>
using namespace std;
string read(vector<int>book,int n,int target){
int left=0, right=n-1;
sort(book.begin(),book.end());
while(left<right){
    int sum= book[left]+book[right];
    if(sum==target){
        return "yes";
    }
    else if(sum<target){
        left++;
    }
    else right--;
}
return "no";
}
int main(){
    vector<int>book={2,3,8,4,6,1,5,9,7};
    int n=book.size();
    int target=10;
    cout<<read(book,n,target);

}

