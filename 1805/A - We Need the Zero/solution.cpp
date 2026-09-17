//  A. We Need the Zero
 
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i=0;i<n;i++)
            cin>>a[i];
        if (n==1) {
            cout<<a[0]<<endl;
        }
        else {
            int ele=0;
            for (int i=0;i<n;i++)
                ele=a[i]^ele;
            if (n%2==1) {
                cout<<ele<<endl;
            }
            else {
                if (ele==0)
                    cout<<0<<endl;
                else
                    cout<<-1<<endl;
            }
        }
    }
    return 0;
}