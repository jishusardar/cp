//  A. Walking Master
 
#include<bits/stdc++.h>
 
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int a,b,c,d;
        cin>>a>>b>>c>>d;
       if (b>d) {
            cout<<-1<<endl;
           continue;
        }
        int x=(d-b);
        a+=x;
        if (a<c)
            cout<<-1<<endl;
        else
            cout<<x+(a-c)<<endl;
        }
    return 0;
}