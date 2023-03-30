#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    int k;
    cin >> k;

    for(int i=0;i<n;i++) {
        if(a[i] == k) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;
    return 0;
}