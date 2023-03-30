#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    char arr[n+1];
    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int l = 0;
    int mx=0;

    while(1) {
        if(arr[i] == ' ' || arr[i] == '\0') {
            mx=max(l, mx);
            l=0;
        }
        else {
            l++;
            if(arr[i] == '\0') {
                break;
            }
            i++;
        }
    }
    cout << mx;
}