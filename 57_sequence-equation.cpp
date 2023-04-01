#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,arr[100];
    cin >> n;
    int a[100],b[100];
    for(int i=1;i<=n;i++) {
        cin >> arr[i];
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(arr[j] == i) {
                a[i] = j;
            }
        }  
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=n;j++) {
            if(a[i] == arr[j]) {
                b[i] = j;
            }
        }
    }  
    for(int i=1;i<=n;i++) {
        cout << b[i] << endl;
    }
    return 0;
}
