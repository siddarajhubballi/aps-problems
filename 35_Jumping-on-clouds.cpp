#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int c=-1;
    for(int i=0;i<n;) {
        if(arr[i+2] < n && arr[i+2] == 0) {
            i+=2;
        }
        else {
            i++;
        }
        c++;
    }
    cout << c << endl;
    return 0;
}
