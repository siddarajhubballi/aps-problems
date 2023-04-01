#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    int a[10], b[10];
    cin >> n >> m;
    
    for(int i=0;i<n;i++) {
        cin >> a[i];
    }
    for(int i=0;i<m;i++) {
        cin >> b[i];
    }
    
    int max = a[0],flag = 1;
    for(int i=0;i<n;i++) {
        if(max < a[i]) {
            max = a[i];
        }
    }
    int min2 = b[0];
    for(int i=0;i<n;i++) {
        if(min2 > b[i]) {
            min2 = b[i];
        }
    }
    int count = 0;
    for(int i=max;i<=min2;i++) {
        flag = 0;
        for(int j=0;j<n;j++) {
            if(i%a[j] != 0) {
                flag = 1;
            }
        }
        for(int j=0;j<m;j++) {
            if(b[j]%i != 0) {
                flag = 1;
            }
        }
            
            if(flag == 1) {
                continue;
            }
            else {
                count++;
            }
        }
        cout << count << endl;
    return 0;
    
}
