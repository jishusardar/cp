//  A. Buttons
 
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll t;
    cin>>t;
    while (t--) {
        ll a,b,c;
        cin>>a>>b>>c;
        vector<ll>arr(3);
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        ll count=0;
        ll temp=c;
        if (c%2)
            count++;
        count+=temp/2;
        arr[0]-=(c-count);
        arr[1]-=count;
        if (arr[0]>arr[1])
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;
    }
    return 0;
}