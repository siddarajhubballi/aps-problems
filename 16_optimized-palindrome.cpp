#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    int l=0,h=n-1;
    while(l<h) {
        if(a[l] != a[h]) {
            cout << "Not palindorme";
            return 0;
        }
        l++;
        h--;
    }
    cout << "Palindrome";
    return 0;
}