#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        if(n==2){
            if(s[0]=='B'&&s[1]=='A')
            cout<<"Bob"<<endl;
            else if(s[0]=='A'&&s[1]=='B')
            cout<<"Alice"<<endl;
        }
        else{
            if(s[0]==s[s.size()-1]){
                if(s[0]=='A')
                cout<<"Alice"<<endl;
                else
                cout<<"Bob"<<endl;
            }
            else{
                ll ca=0,cb=0;
                if(s[0]=='A'){
                    for(int i=0;i<s.size();i++){
                        if(s[i]=='A')
                        ca++;
                        else if(s[i]=='B')
                        cb++;
                    }
                    if(ca>cb)
                    cout<<"Alice"<<endl;
                    else
                    cout<<"Bob"<<endl;
                }
                else{
                s[0]='#';
                s[s.size()-1]='#';
                for(int i=0;i<s.size();i++){
                    if(s[i]=='A')
                    ca+=i;
                    else if(s[i]=='B')
                    cb+=i;
                }
                if(ca>cb)
                cout<<"Alice"<<endl;
                else
                cout<<"Bob"<<endl;
                }
            }
        }
    }
}