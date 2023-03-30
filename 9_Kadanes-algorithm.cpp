#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    int a[n];
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int mx = INT_MIN;
    int currsum=0;
    for(int i=0;i<n;i++) {
        currsum += a[i];
        if(currsum < 0) {
            currsum = 0;
        }
        mx = max(currsum, mx);
    }
    cout << mx << endl;

    return 0;
}