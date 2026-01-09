#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int>A(N);
    for(int i=0;i<N;i++)
    cin>>A[i];
    unordered_map<int,vector<int>>mm;
    for(int i=0;i<N;i++){
        if(A[i]==7)
        mm[7].push_back(i);
        else if(A[i]==5)
        mm[5].push_back(i);
        else if(A[i]==3)
        mm[3].push_back(i);
    }
    int ans=0;
    for(int i=0;i<mm[5].size();i++){
        int count1=0;
        for(int j=0;j<mm[7].size();j++){
            if(mm[7][j]>mm[5][i])
            count1++;
        }
        int count2=0;
        for(int k=0;k<mm[3].size();k++){
            if(mm[3][k]>mm[5][i])
            count2++;
        }
        ans+=max(count1,count2);
    }
    for(int i=0;i<mm[5].size();i++){
        int count1=0;
        for(int j=0;j<mm[7].size();j++){
            if(mm[7][j]<mm[5][i])
            count1++;
        }
        int count2=0;
        for(int k=0;k<mm[3].size();k++){
            if(mm[3][k]<mm[5][i])
            count2++;
        }
        ans+=max(count1,count2);
    }
    mm.clear();
    for(int i=0;i<N;i++){
        if(A[i]%7==0&&A[i]!=7)
        mm[7].push_back(i);
        else if(A[i]%5==0&&A[i]!=5)
        mm[5].push_back(i);
        else if(A[i]%3==0&&A[i]!=3)
        mm[3].push_back(i);
    }
    for(int i=0;i<mm[5].size();i++){
        int count1=0;
        for(int j=0;j<mm[7].size();j++){
            if(mm[7][j]>mm[5][i])
            count1++;
        }
        int count2=0;
        for(int k=0;k<mm[3].size();k++){
            if(mm[3][k]>mm[5][i])
            count2++;
        }
        ans+=max(count1,count2);
    }
    for(int i=0;i<mm[5].size();i++){
        int count1=0;
        for(int j=0;j<mm[7].size();j++){
            if(mm[7][j]<mm[5][i])
            count1++;
        }
        int count2=0;
        for(int k=0;k<mm[3].size();k++){
            if(mm[3][k]<mm[5][i])
            count2++;
        }
        ans+=max(count1,count2);
    }
    cout<<ans;
}