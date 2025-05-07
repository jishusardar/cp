#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,num;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        unordered_map<int,int>mm;
        int sum=0;
        int sum2=0;
        for(int i=0;i<a.size();i++){
            if(mm[a[i]]==0){
                mm[a[i]]++;
                sum+=a[i];
            }
            else{
                sum2+=a[i];
            }
        }
        if(abs(sum-sum2)<=n/2){
            cout<<"YES"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
}