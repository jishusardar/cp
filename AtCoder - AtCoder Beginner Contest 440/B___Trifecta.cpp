//  B - Trifecta

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long N;
cin>>N;
vector<long long>T(N);
for(long long i=0;i<N;i++){
cin>>T[i];
}
vector<pair<int,int>>h(N);
for(long long i=0;i<N;i++){
h[i]={T[i],i+1};
}
sort(h.begin(),h.end());
for(int i=0;i<3;i++){
cout<<h[i].second<<" ";
}
    return 0;
}
