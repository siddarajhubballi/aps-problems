#include<bits/stdc++.h>

using namespace std;

int main() {
    int d1,d2,m1,m2,y1,y2;
    cin >> d2 >> m2 >> y2 >> d1 >> m1 >> y1;
    if(y2 > y1) {
        cout << 10000;
    }
    else if(y1 == y2 && m2 > m1) {
        cout << 500*(m2-m1);
    }
    else if(y1==y2 && m1 == m2 && d2 > d1) {
        cout << 15*(d2-d1);
    }
    else {
        cout << 0;
    }
    return 0;
}
     