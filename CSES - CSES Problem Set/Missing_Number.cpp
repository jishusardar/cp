//  Missing Number

#include<bits/stdc++.h>
using namespace std;
void fnc(long long n,vector<long long>&a) {
    long long int m=n*(n+1)/2;
    for (int i=0;i<a.size();i++)
        m-=a[i];
    if (m>0)
        cout<<m;
    else
        cout<<n;
}
int main() {
    long long n;
    cin>>n;
    vector<long long >a(n-1);
    for (long long int i=0;i<n;i++)
        cin>>a[i];
    fnc(n,a);
}
