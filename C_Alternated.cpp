#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s;
    cin>>n;
    cin>>s;
    int countmaxa=0;
    int countmaxb=0;
    int counta=0;
    int countb=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='A'&&s[i+1]=='A'){
            counta++;
        }
        else
        {
            countmaxa=max(countmaxa,counta);
            counta=0;
        }
    }
    for(int i=1;i<n-1;i++){
        if(s[i]=='B'&&s[i+1]=='B'){
            countb++;
        }
        else
        {
            countmaxb=max(countmaxb,countb);
            countb=0;
        }
    }
    cout<<min(countmaxa,countmaxb);
}