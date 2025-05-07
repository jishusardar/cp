#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool checkPrime(int n){ 
    int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++){ 
        if(n % i == 0){ 
            cnt = cnt + 1;
            if(n / i != i){
                cnt = cnt + 1;
            }
        }
    }
    if(cnt == 2){
        return true;
    }
    else{ 
        return false; 
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=n;
        int dig=1 + floor(log(n)/log(10));
        k--;
        while(k--){
            ans+=ans*pow(10,dig)+n;
        }
        bool p=checkPrime(ans);
        for(int i=2;i<ans;i++){
            if(ans%i==0)
            p=false;
        }
        if(p==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}