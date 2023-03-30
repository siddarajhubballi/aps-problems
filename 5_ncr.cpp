#include<bits/stdc++.h>
using namespace std;

int fact(int n) {
    int ans=1;
    for(int i=2;i<=n;i++) {
        ans+=i;
    }
    return ans;
}

int ncr(int n, int r) {
    return fact(n)/(fact(r)*fact(n-r));
}

int main() {
    int n,r;
    cin >> n >> r;
    cout << ncr(n,r) << endl;
    return 0;
}