#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,arr[1000];
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    int j,key;
    for(int i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        for(int k=0;k<n;k++) {
            cout << arr[k] << " ";
        }
        cout << endl;
    }
    return 0;
}
