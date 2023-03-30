#include<bits/stdc++.h>

using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            cin >> arr[i][j];
        }
    }

    int target;
    cin >> target;
    int r=0,c=m-1;
    while(r<n && c>=0) {
        if(arr[r][c] == target) {
            cout << "present" << endl;
            return 0;
        }
        else if(arr[r][c] < target) {
            r++;
        }
        else {
            c--;
        }
    }
    cout << "Not present" << endl; 
    return 0;
}