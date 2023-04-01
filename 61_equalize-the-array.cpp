#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,arr[100],brr[100];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        brr[i]=0;
    }
    int max = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j && arr[i]==arr[j]){
                brr[i]++;
                if(brr[i]>max){
                    max = brr[i];
                }
            }
        }
    }
    cout << n-max-1 << endl;
    return 0;
}
