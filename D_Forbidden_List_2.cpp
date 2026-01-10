//  D - Forbidden List 2

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long int N,Q;
    cin>>N>>Q;
    vector<long long>A(N);
    for(int i=0;i<N;i++)
    cin>>A[i];
    unordered_map<int,int>mm;
    for(long long i=0;i<N;i++){
      mm[A[i]]++;
    }
    long long X,Y;
    for(long long i=0;i<Q;i++){
        cin>>X>>Y;
        for(auto i:mm){
        }
        cout<<temp<<endl;
    }
    return 0;
}