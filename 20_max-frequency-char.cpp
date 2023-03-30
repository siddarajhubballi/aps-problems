#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n=s.size();

    int freq[26];
    for(int i=0;i<26;i++) {
        freq[i] = 0;
    }
    for(int i=0;i<n;i++) {
        freq[s[i]-'a']++;
    }
    int mx=0;
    for(int i=0;i<26;i++) {
        mx=max(mx, freq[i]);
    }
    cout << mx << endl;
}