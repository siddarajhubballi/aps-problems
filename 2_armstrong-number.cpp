#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int temp=n;
    int sum = 0;

    while(n>0) {
        sum += pow(n%10,3);
        n/=10;
    }
    if(temp == sum) {
        cout << "Armstrong number" << endl;
    }
    else {
        cout << "Not Armstrong number" << endl;
    }
    return 0;
}