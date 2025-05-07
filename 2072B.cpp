#include<bits/stdc++.h>
using namespace std;
int countsubs(int leftn,int rightn,int m)
{
    if(leftn==1&&rightn==1&&m==1)
    return 1;
    

}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int n=0,m=0;
        for(int i=0;i<n;i++){
            if(s[i]=='-')
            n++;
            else if(s[i]=='_')
            m++;
        }

    }
}