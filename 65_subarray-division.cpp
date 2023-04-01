#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,arr[100],d,m;
    cin >> n;
    for(int i=0;i<n;i++) {
        cin >> arr[i];
    }
    cin >> d >> m;
    int l = n-m+1,sum=0,k;
    int count1 = 0;
    for(int i=0;i<l;i++) {
        sum = 0,k=0;
        for(int j=i;k<m;j++){
            k++;
            sum+=arr[j];
        }
        // cout << sum << " ";
        if(sum == d){
            count1++;
        }
    }
    cout << count1 << endl;
    return 0;
}
