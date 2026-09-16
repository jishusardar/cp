//  A. Unit Array
 
#include<bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0;i<n;i++)
            cin>>a[i];
        int pos1=0;
        int neg1=0;
        for (int i=0;i<n;i++) {
            if (a[i]==-1)
                neg1++;
            else
                pos1++;
        }
            int ans=0;
            int diff=-(neg1)+pos1;
            while (diff<0||neg1%2!=0) {
                diff+=2;
                pos1+=1;
                neg1-=1;
                ans++;
            }
            cout<<ans<<endl;
    }
    return 0;
}