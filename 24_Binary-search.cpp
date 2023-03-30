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

    int l=0,e=n-1;
    while(l>e) {
        int mid = (l+e)/2;
        if(a[mid] == k) {
            cout << k;
            return 0;
        }    
        else if(a[mid] < k) {
            l = mid+1;
        }
        else {
            e=mid-1;
        }
    }
    cout << -1;
    return 0;
}