#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k,p;
        cin>>n>>k>>p;
        k=abs(k);
        int num=k/p;
        if(k%p)
        num+=1;
        if(n<num)
        cout<<-1<<endl;
        else
        cout<<num<<endl;
    }
}