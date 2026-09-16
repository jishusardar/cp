//  A. Desorting
 
#include<bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long int>a(n);
        for (int i=0;i<n;i++)
            cin>>a[i];
        bool zeroflag=0;
        for (int i=0;i<n-1;i++) {
            if (a[i]>a[i+1])
                zeroflag=1;
        }
        if (!zeroflag) {
            long long int mini=10e9+7;
            for (int i=0;i<n-1;i++) {
                mini=min(a[i+1]-a[i],mini);
            }
            cout<<(mini/2)+1<<endl;
        }
        else
            cout<<0<<endl;
    }
    return 0;
}