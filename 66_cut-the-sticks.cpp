#include<bits/stdc++.h>

using namespace std;

int main() {
    int n, arr[1000];
    cin >> n;
    int s = n;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    while(s > 0) {
        cout << s << endl;
        int min = arr[0];
        for(int i=0;i<s;i++) {
            if(min > arr[i]) {
                min = arr[i];
            }
        }
        for(int i=0;i<s;i++) {
            arr[i] -= min;
            if(arr[i] == 0) {
                arr[i] = arr[s-1];
                s--; 
                i--;
            }
        }
    }
    
    return 0;
}
