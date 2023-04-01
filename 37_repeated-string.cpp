#include<bits/stdc++.h>

using namespace std;

long long findF(string s, long long len) {
    long long c=0;
    for(int i=0;i<len;i++) {
        if(s[i] == 'a') {
            c++;
        }
    }   
    return c;
}

int main() {
    string s;
    cin >> s;
    long long n, len = s.length();
    cin >> n;
    long long freq = n/len;
    long long r = n%len;
    cout << freq * findF(s, len) + findF(s, r);
    return 0;
}
