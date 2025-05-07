#include<bits/stdc++.h>
using namespace std;
void bags()
{
    int n;
        cin>>n;
        set<int>s1;
        map<int,int>mp;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            mp[arr[i]]++;
            s1.insert(arr[i]);
        }
        while(!s1.empty()){
            int min=*s1.begin();
            if(mp[min]==1){
                cout<<"NO"<<endl;
                return;
            }
            mp[min+1]+=mp[min]-2;
            s1.erase(min);
            if(mp[min+1]){
                s1.insert(min+1);
            }
            mp[min]=0;
        }
        cout<<"YES"<<endl;
}
int main()
{
    int t=2;
    cin>>t;
    while(t--)
    bags();
}