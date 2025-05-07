//beautiful matrix 263 A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int posx=-1,posy=-1;
    vector<vector<int>>mat(5,vector<int>(5));
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            cin>>mat[i][j];
        }
    }
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            if(mat[i][j]==1){
                posx=i;
                posy=j;
                break;
            }
        }
    }
    int sol=abs(2-posx)+abs(2-posy);
    cout<<sol;
    return 0;
}