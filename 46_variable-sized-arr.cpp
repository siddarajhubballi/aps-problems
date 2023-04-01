#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,m,len;
    int* arr[100000];
    
    cin >> n >> m;
    for(int i=0;i<n;i++) {
        cin >> len;
        arr[i] = (int*)malloc(sizeof(int)*len);
        for(int j=0;j<len;j++) {
            cin >> arr[i][j];
        }
    }  
    int a,b;
    for(int i=0;i<m;i++) {
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    return 0;
}
