#include<bits/stdc++.h>
using namespace std;

// T.C : O(m+n)  S.C : O(1)
void printBoundaryTraversal(int mat[3][2], int m, int n){
    if(m==1){
        for(int i=0;i<n;i++){
            cout<<mat[0][i]<<" ";
        }
    }
    else if(n==1){
        for(int i=0;i<m;i++){
            cout<<mat[i][0]<<" ";
        }
    }
    else{
        for(int i=0;i<n;i++){
            cout<<mat[0][i]<<" ";
        }
        for(int i=1;i<m;i++){
            cout<<mat[i][n-1]<<" ";
        }
        for(int i=n-2;i>=0;i--){
            cout<<mat[m-1][i]<<" ";
        }
        for(int i=m-2;i>=1;i--){
            cout<<mat[i][0]<<" ";
        }
    }
}


int main(){
    int m = 3,n=2;
    int mat[m][n];

    printBoundaryTraversal(mat,m,n);
}