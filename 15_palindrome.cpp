#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n+1];
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }

    for(int i=0;i<n;i++) {
        if(a[i] != a[n-i-1]) {
            cout << "Not palindrome" << endl;
        }
    }
    cout << "Palindrome" << endl;
    return 0;
}