#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n=s.size();
    for(int i=0;i<n;i++) {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] + 'A' - 'a';
        }
    }
    cout << s << endl;
}