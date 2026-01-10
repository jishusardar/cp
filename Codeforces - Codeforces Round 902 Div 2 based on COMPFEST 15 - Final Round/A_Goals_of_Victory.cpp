//  A. Goals of Victory

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin>>t;
    while (t--) {
        long long n;
        cin>>n;
        vector<int>a(n-1);
        for (long long i=0;i<n-1;i++)
            cin>>a[i];
        long long sum=0;
        for (long long i=0;i<n-1;i++) {
            sum+=a[i];
        }
        cout<<-1*sum<<endl;

    }
    return 0;
}
