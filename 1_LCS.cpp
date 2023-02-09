#include<bits/stdc++.h>
using namespace std;

int LCS(string s1, string s2) {
    int len1 = s1.size();
    int len2 = s2.size();
    int arr[len1+1][len2+1];

    for(int i=0;i<=len1;i++) {
        for(int j=0;j<=len2;j++) {
            if(i == 0 || j == 0) {
                arr[i][j] = 0;
            }
            else {
                if(s1[i-1] == s2[j-1]) {
                    arr[i][j] = arr[i-1][j-1] + 1;
                }
                else {
                    arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
                }
            }
        }
    }
    return arr[len1][len2];
}

int main() {
    string s1, s2;
    cout << "Enter S1 : ";
    cin >> s1;
    cout << "Enter S2 : ";
    cin >> s2;
    int ans = LCS(s1, s2);
    cout << ans;
    return 0;
}