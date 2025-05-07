#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,sum=0;;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        if(k==1){
            for(int i=0;i<n-1;i++){
                sum=max(sum,a[i]+a[n-1]);
            }
            for(int i=1;i<n;i++){
                sum=max(sum,a[i]+a[0]);
            }
        }
        else{
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<=k;i++){
            sum+=a[i];
        }
      }
        cout<<sum<<endl;
    }
}