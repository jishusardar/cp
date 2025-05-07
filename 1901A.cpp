#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        int ans=a[0]-0;
        for(int i=1;i<a.size();i++){
            ans=max(ans,a[i]-a[i-1]);
        }
        int num=a[a.size()-1];
        ans=max(ans,(x-num)*2);
        cout<<ans<<endl;
    }
}