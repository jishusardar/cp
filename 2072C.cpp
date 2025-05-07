#include<bits/stdc++.h>
using namespace std;
// vector<int>generatearr(int n,int x,int i,vector<int>&ans)
// {
//     if(i==n)
//     return ans;

// }
int main()
{
    // int t;
    // cin>>t;
    // while(t--){
    //     int n,x;
    //     cin>>n>>x;

    // }
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans=arr[0];
    for(int i=1;i<n;i++){
        ans=ans|arr[i];
    }
    cout<<ans;
}
