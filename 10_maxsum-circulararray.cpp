#include<bits/stdc++.h>

using namespace std;

int kadane(int n, int a[]) {
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
}

int main() {
    int n;
    int a[n];
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    
    int wrapsum;
    int nonwrapsum;

    nonwrapsum = kadane(n,a);
    int sum=0;
    for(int i=0;i<n;i++) {
        sum += a[i];
        a[i] = -a[i];
    }

    wrapsum = sum + kadane(n,a);
    int mx=max(wrapsum, nonwrapsum);
    cout << mx << endl;

    return 0;
}