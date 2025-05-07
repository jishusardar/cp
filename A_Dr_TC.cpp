#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        string s;
        cin>>s;
        long long ini=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1')
            ini++;
        }
        long long ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                ans+=ini-1;
            }
            else{
                ans+=ini+1;
            }
        }
        cout<<ans<<endl;
    }
}