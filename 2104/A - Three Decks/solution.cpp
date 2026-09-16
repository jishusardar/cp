#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long nums1=c-b;
        long long nums2=b-a;
        if(nums1>=nums2){
        nums1-=nums2;
        if(nums1%3==0)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}