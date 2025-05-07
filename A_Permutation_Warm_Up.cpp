#include<bits/stdc++.h>
using namespace std;
int count(int n)
{
    if(n==0)
    return 1;
    if(n==1)
    return 1;
    return (n*count(n-1))+((n-1)*count(n-2));
}
int main()
{
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=count(n);
        cout<<ans<<endl;
    }
}