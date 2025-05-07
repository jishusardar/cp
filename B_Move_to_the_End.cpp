#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        cin>>arr[i];
        vector<int>temp(arr.begin(),arr.end());
        sort(temp.begin(),temp.end());
        map<int,int>mm;
        for(int i=0;i<n;i++)
        mm[temp[i]]++;
        vector<long long>ans;
        ans.push_back(temp[temp.size()-1]);
        int j=temp.size()-1;
        for(int i=arr.size()-1;i>=0;i--){
            if(mm[temp[i]]){
                mm[temp[i]]--;
                j--;
            }
            long long sum=0;
            int index=i;
            while(index<arr.size()){
            sum+=arr[i];
            index++;
            }
            sum+=temp[j];
            ans.push_back(sum);
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
}