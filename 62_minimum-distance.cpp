#include<bits/stdc++.h>
using namespace std;

int main() {
    long long arr[100];
    int n;
    cin >> n;
    map<long long, int> m;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int ans = 1000000;
    for(int i=0;i<n;i++) {
        if(m.find(arr[i]) == m.end()) {
            m.insert({arr[i],i});
        }
        else {
            ans = min(ans, abs(i-m[arr[i]]));
        }
    }
    if(ans == 1000000) {
        cout << -1;
    }
    else {
        cout << ans;
    }
    
    return 0;
}
