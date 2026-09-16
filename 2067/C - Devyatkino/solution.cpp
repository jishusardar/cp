#include<bits/stdc++.h>
using namespace std;
#define int long long
bool check(int n)
{
    while(n){
        if(n%10==7)
        return 1;
        n/=10;
    }
    return 0;
}
void soln()
{
    int n;
    int ans=10,count;
    cin>>n;
    for(int i=9;i<1000000000000000;i=i*10+9){
        count=0;
        int num=n;
        while(!check(num)){
            count++;
            num+=i;
        }
        ans=min(ans,count);
    }
    cout<<ans<<endl;
}
signed main()
{
    int t;
    cin>>t;
    while(t--)
    soln();
}