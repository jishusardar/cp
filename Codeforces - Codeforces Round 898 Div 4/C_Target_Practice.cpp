//  C. Target Practice

#include<bits/stdc++.h>

using namespace std;

int main() {
    long long t;
    cin>>t;
    while (t--) {
        vector<vector<char>>arr(10,vector<char>(10,'.'));
        for (int i=0;i<10;i++) {
            for (int j=0;j<10;j++) {
               cin>>arr[i][j];
            }
        }
        long long  points=1;
        long long sum=0;
        int start=0,end=9,left=0,right=9;
        while (start<=end&&left<=right) {
            for (int i=left;i<=right;i++) {
                if (arr[start][i]=='X') {
                    sum+=points;
                }
            }
            start++;
            for (int i=start;i<=end;i++) {
                if (arr[i][right]=='X') {
                    sum+=points;
                }
            }
            right--;
            if (left<=right) {
                for (int i=right;i>=left;i--) {
                    if (arr[end][i]=='X') {
                        sum+=points;
                    }
                }
                end--;
            }
            if (start<=end) {
                for (int i=end;i>=start;i--) {
                    if (arr[i][left]=='X')
                        sum+=points;
                }
                left++;
            }
            points++;
        }
        cout<<sum<<endl;
    }
    return 0;
}
