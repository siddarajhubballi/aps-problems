#include<bits/stdc++.h>

using namespace std;

int main() {

    int n=6;
    int a[100]={10,7,4,6,8,10,11};
    int ans=2;
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;

    while(j<n) {
        if(pd == a[j]-a[j-1]) {
            curr++;
        }
        else {
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans = max(ans, curr);
    }
    cout << ans;
    return 0;
}