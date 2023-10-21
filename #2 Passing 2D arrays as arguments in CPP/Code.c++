#include<bits/stdc++.h>
using namespace std;

const int r = 3;
const int c = 2;

void print(int mat[r][c]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j]<<" ";
        }
    }
    // O/P : 1 2 3 4 5 6
}
void print(int mat[][2], int m){
    for(int i=0;i<m;i++){
        for(int j=0;j<2;j++){
            cout<<mat[i][j]<<" ";
        }
    }
    // O/P : 1 2 3 4 5 6
}
void print(int mat[3][2]){
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            cout<<mat[i][j]<<" ";
        }
    }
    // O/P : 1 2 3 4 5 6
}
int main(){
    int mat[3][2] = {{1,2},{3,4},{5,6}};
    print(mat);
    print(mat,3);
    return 0;
}