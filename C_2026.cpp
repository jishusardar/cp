#include<iostream>
#include<algorithm>
#include<vector>
#include<math.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    vector<int>v;
    for(int i=1;i<N;i++){
        for(int j=i+1;j<N;j++){
            int num=i*i+j*j;
            if(num<=N){
                v.push_back(num);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size()==0)
    cout<<0;
    else{
        cout<<v.size()<<endl;
        for(auto i:v){
            cout<<i<<" ";
        }
    }
}