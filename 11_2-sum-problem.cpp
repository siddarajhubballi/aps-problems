#include<bits/stdc++.h>

using namespace std;

bool pairsum(int arr[], int n, int k) {
    for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            if(arr[i] + arr[j] == k)
                return true; 
        }
    }
    return false;
}

int main() {
    int n,k;
    int a[n];
    cin >> n >> k;
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    bool ans;
    ans = pairsum(a, n, k);
    if(ans == true) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
    return 0;
}