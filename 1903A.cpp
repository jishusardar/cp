#include<bits/stdc++.h>
using namespace std;
bool already(vector<int>arr)
{
    for(int i=0;i<arr.size()-1;i++){
        if(arr[i]>arr[i+1])
        return 0;
    }
    return 1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<a.size();i++){
            cin>>a[i];
        }
        if(already(a))
        cout<<"YES"<<endl;
        else{
            if(k==1){
                if(n==1)
                cout<<"YES"<<endl;
                else
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
}