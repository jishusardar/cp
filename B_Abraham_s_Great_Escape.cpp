#include<bits/stdc++.h>
using namespace std;
int rows[4]={-1,1,0,0};
int colms[4]={0,0,-1,1};
bool valid(int i,int j,int n)
{
    return i>=0&&j>=0&&i<n&&j<n;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k%2&&n==2){
        cout<<"NO"<<endl;
        continue;
        }
        cout<<"YES"<<endl;
        vector<vector<char>>grid(n,vector<char>(n,'L'));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(k){
                    grid[i][j]='U';
                k--;
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++)
            cout<<grid[i][j];
            cout<<endl;
        }
    }
}