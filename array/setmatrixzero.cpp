#include<bits/stdc++.h>
using namespace std;
vector<vector<int>>zeromatrix(vector<vector<int>>& matrix,int m,int n){ 
    int row[m]={0};

    // These arrays store which row and which column should be marked zero.

// If row[i] = 1 → make row i all zero.

// If col[j] = 1 → make column j all zero.
    int col[n]={0};
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(matrix[i][j]==0){
                row[i]=1;
                col[j]=1;         

    
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
// Every row that is marked becomes zero.

// Every column that is marked becomes zero.
            if(row[i]==1 || col[j]==1){
                matrix[i][j]=0;
            }
        }
    }
    return matrix;
}
int main(){
    vector<vector<int>>matrix={{1,1,1},{1,0,1},{1,1,1}};
    int m=matrix.size();
    int n=matrix[0].size();
    vector<vector<int>>res=zeromatrix(matrix,m,n);
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<res[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}