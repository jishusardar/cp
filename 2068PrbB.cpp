#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,k,x;
    cin>>n>>k>>x;
    int a[n];
    int b[n*k];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=0;i<n;i++)
    b[i]=a[i];
    for(int i=n;i<n*k;i++){
        b[i]=a[(i)%n];
    }
    int ans=0;
    if(n==1){
        if(b[n-1]>=x){
            ans++;
        }
    }
    else if(k==1){
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=b[i];
            if(sum>=x)
            ans++;
        }
    }
    else{
        int start=0,end=0;
        int sum=0;
        while(end<n*k&&start<=end){
            sum+=b[end];
            if(sum>=x){
                ans++;
                sum-=b[start];
                start++;
            }
            end++;
        }
    }
    cout<<ans<<endl;
}

}