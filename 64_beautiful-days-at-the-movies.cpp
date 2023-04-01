#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main() {
    int i,j,k,rem,rev,count1=0;
    string num;
    cin >> i >> j >> k;
    for(int n=i;n<=j;n++) {
        num = to_string(n);
        reverse(num.begin(), num.end());
        rev = stoi(num);
        // cout << rev << " ";
        // if(n>rev) {
        //     if((n-rev)/k == 0){
        //         count1++;
        //     }
        // }
        // else {
           if((rev-n)%k == 0){
                count1++;
            } 
        // }
    }
    cout << count1 << endl;

    return 0;
}
