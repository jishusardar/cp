//  A. How Much Does Daytona Cost?

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int t;
    cin>>t;
    while (t--) {
        long long int n,k;
        cin>>n>>k;
        vector<long long int>a(n);
        for (long long int i=0;i<n;i++)
            cin>>a[i];
        bool flag=0;
        for (long long int i=0;i<n;i++) {
            if (a[i]==k) {
                flag=1;
                break;
            }
        }
        if (flag)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
