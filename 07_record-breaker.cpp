#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    if(n==1) {
        cout << 1;
        return 0;
    }
    int ans=0;
    int mx = INT_MIN;
    for(int i=0;i<n;i++) {
        if(a[i] > mx && a[i] > a[i+1]) {
            ans++;
        }
        mx = max(mx,a[i]);
    }
    cout << mx;
    return 0;
}