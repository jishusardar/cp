//  A. Array Coloring
 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ll t;
    cin>>t;
    ll n;
    while (t--) {
        cin>>n;
        vector<ll>a(n);
        for (ll i=0;i<n;i++)
            cin>>a[i];
        ll sum1=0;
        for (ll i=0;i<n;i++)
            sum1+=a[i];
        ll sum2=0;
        bool p=false;
        for (int i=0;i<n;i++) {
            sum1-=a[i];
            sum2+=a[i];
            if (sum1%2&&sum2%2) {
                p=true;
                break;
            }
            if (sum1%2==0&&sum2%2==0) {
                p=true;
                break;
            }
        }
        if (p)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}