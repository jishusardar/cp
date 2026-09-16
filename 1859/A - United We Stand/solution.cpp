//  A. United We Stand
 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
 
int main() {
    ll t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for (ll i=0;i<n;i++)
            cin>>a[i];
        vector<ll>b;
        vector<ll>c;
            ll maxi=INT_MIN;
            for (ll i=0;i<n;i++) {
                maxi=max(maxi,a[i]);
            }
            for (ll i=0;i<n;i++) {
                if (a[i]!=maxi)
                    b.push_back(a[i]);
                else
                    c.push_back(a[i]);
            }
        if (b.size()==0)
            cout<<-1<<endl;
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for (ll i=0;i<b.size();i++) {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for (ll i=0;i<c.size();i++) {
                cout<<c[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}