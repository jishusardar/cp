#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int mini=INT_MAX;
    int size=0;
    while(x){
        int rem=x%10;
        mini=min(mini,rem);
        x/=10;
        size++;
    }
    int ans=mini;
    size--;
    while(size--){
        ans=ans*10+mini;
    }
    cout<<ans;
}