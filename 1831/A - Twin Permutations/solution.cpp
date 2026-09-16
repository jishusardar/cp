//  A. Twin Permutations
 
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
        vector<int>ans;
        for (int i=0;i<n;i++) {
            ans.emplace_back(n+1-a[i]);
            cout<<ans[i]<<" ";
        }
        cout<<endl;
 
    }
    
    return 0;
}