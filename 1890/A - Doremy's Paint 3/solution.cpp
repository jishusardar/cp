#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)
        cin>>a[i];
        map<int,int>mm;
        for(int i=0;i<n;i++)
        mm[a[i]]++;
        if(mm.size()>2){
            cout<<"No"<<endl;
        }
        else{
            int fr1=mm.begin()->second;
            int fr2=mm.rbegin()->second;
            if(fr1==fr2)
            cout<<"Yes"<<endl;
            else if(n%2==1&&abs(fr1-fr2)==1)
            cout<<"Yes"<<endl;
            else
            cout<<"No"<<endl;
        }
    }
}