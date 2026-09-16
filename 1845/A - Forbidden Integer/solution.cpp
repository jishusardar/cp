//  A. Forbidden Integer
 
#include<bits/stdc++.h>
 
using namespace std;
void yesfunc(vector<int>&a) {
        cout<<"YES"<<endl;
        int ans=0;
        for (int j=0;j<a.size();j++) {
            if (a[j]!=0)
                ans+=a[j];
        }
    cout<<ans<<endl;
        for (int j=0;j<a.size();j++) {
            while (a[j]--) {
                cout<<j<<" ";
            }
        }
    cout<<endl;
}
bool solve(int n,int k,int x,vector<int>&a) {
    if (n==0)
        return 1;
    if (k==0)
        return 0;
    if (k==x||k>n)
        return solve(n,k-1,x,a);
    a[k]++;
    if (solve(n-k,k,x,a))
        return 1;
    a[k]--;
    return solve(n,k-1,x,a);
}
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k,x;
        cin>>n>>k>>x;
        bool solved=0;
        vector<int>a(k+1,0);
        solved=solve(n,k,x,a);
        if (solved) {
            yesfunc(a);
        }
        if (!solved)
        cout<<"NO"<<endl;
    }
    return 0;
}