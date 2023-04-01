#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,t;
    int arr[100000];
    int trr[1000][2];
    cin >> n >> t;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    for(int i=0;i<t;i++) {
        for(int j=0;j<2;j++) {
            cin >> trr[i][j];
        }
    }
    for(int i=0;i<t;i++){
        int a = trr[i][0];
        int b = trr[i][1];
        int min = 1000;
        for(int j=a;j<=b;j++) {
            if(arr[j] < min) {
                min = arr[j];
            }
        }
        cout << min << endl;
    }
    return 0;
}
