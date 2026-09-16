#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int total_drink=k*l;
    int total_toast=total_drink/nl;
    int total_limes=d*c;
    int total_salt=p/np;
    int ans=min(total_toast,total_limes);
    ans=min(ans,total_salt);
    ans/=n;
    cout<<ans;
}