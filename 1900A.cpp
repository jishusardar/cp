#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            s.push_back(c);
        }
        int ans=0;
        bool p=true;
        int sum=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='.')
            count++;
            else
            {
                sum+=count;
                count=0;
            }
            if(count==3){
                ans=2;
                p=false;
                break;
            }
        }
        sum+=count;
        if(p)
        cout<<sum<<endl;
        else
        cout<<ans<<endl;
    }
}