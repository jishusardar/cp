//  A. Ambitious Kid

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long N;
    cin>>N;
    vector<long long >A(N);
    for (long long i=0;i<N;i++)
        cin>>A[i];
    long long ans=INT_MAX;
    for (long long i=0;i<N;i++) {
        ans=min(ans,abs(0-A[i]));
    }
    cout<<ans<<" ";
    return 0;
}
