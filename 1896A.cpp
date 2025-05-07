#include<bits/stdc++.h>
using namespace std;
bool result(vector<int>arr)
{
    for(int i=1;i<arr.size();i++){
        if(arr[i]<arr[i-1])
        return 0;
    }
    return 1;
}
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
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            swap(a[i],a[i+1]);
        }
        bool p=result(a);
        if(p==true)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
}