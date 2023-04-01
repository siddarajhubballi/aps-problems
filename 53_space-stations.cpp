#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,m,arr[100000];
    cin >> n >> m;
    for(int i=0;i<m;i++) {
        cin >> arr[i];
    }
    int min;
    int max=0;
    for(int i=0;i<n;i++) {
        min = abs(i-arr[0]);
        for(int j=0;j<m;j++) {
            if(min > abs(i-arr[j])) {
                min = abs(i-arr[j]);
            }
        }
        if(max < min) {
            max = min;
        }
    }
    cout << max;
    return 0;
}
