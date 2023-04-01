#include<bits/stdc++.h>

using namespace std;

int main() {
    int n,c,m;
    int t;
    cin >> t;
    int a,rem,count;
    while(t--) {
        count = 0;
        cin >> n >> c >> m;
        count += n/c;
        rem = count;
        while(rem >= m) {
            count += rem/m;
            int temp = rem/m;
            rem = rem%m;
            rem += temp;
        }
        cout << count << endl;
    }
    
    return 0;
}
