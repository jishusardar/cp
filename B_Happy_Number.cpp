#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>=10){
        int temp=n;
        int ans=0;
        while(temp!=0){
            int rem=temp%10;
            temp/=10;
            ans+=pow(rem,2);
        }
        n=ans;
    }
    if(n==1)
    cout<<"Yes";
    else
    cout<<"No";
}