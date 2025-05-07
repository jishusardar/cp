#include<bits/stdc++.h>
using namespace std;
bool result1(vector<int>arr)
{
    int num=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]!=num)
        return 0;
    }
    return 1;
}
bool result2(vector<int>arr)
{
    unordered_map<int,int>mm;
    for(int i=0;i<arr.size();i++){
        mm[arr[i]]++;
    }
    if(mm.size()!=2)
    return 0;
    else{
        vector<int>l;
        for(auto i:mm){
            l.push_back(i.second);
        }
        sort(l.begin(),l.end());
        for(int i=1;i<l.size();i++){
            if(l[i-1]+1!=l[i])
            return 0;
        }
        return 1;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==2)
        cout<<"Yes"<<endl;
        else{
            if(n%2==0){
                bool p=result1(a);
                if(p==1)
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;
            }
            else{
                bool p=result2(a);
                if(p==1)
                cout<<"Yes"<<endl;
                else
                cout<<"No"<<endl;
            }
        }
    }
}