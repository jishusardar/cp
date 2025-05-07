#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        if(n%2&&k%2){
            n-=k;
            ans++;
        }
        k--;
        ans+=(n+k-1)/k;
        cout<<ans<<endl;
    }
}