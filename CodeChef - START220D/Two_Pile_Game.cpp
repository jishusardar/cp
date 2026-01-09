

#include<bits/stdc++.h>

using namespace std;
void fns(int x,int y,int &count) {
    if (y==0&&x==0)
        return;
    if (y==0&&x!=0) {
        count++;
        fns(x-1,y,count);
    }
    if (x==0&&y!=0) {
        count++;
        fns(x+1,y-1,count);
    }
    count++;
    fns(x-1,y-1,count);

}
int main() {
    int T;
    cin>>T;
    while (T--) {
        int X,Y;
        cin>>X>>Y;
        int count=0;
        fns(X,Y,count);
        if (count%2==0)
            cout<<"Bob"<<endl;
        else
            cout<<"Alice"<<endl;
    }
    return 0;
}
