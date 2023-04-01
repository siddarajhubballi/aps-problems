#include<iostream>

using namespace std;

int main()
{
    int a[3],b[3];
    int a1 = 0,b1 = 0;
    cin >> a[0] >> a[1] >> a[2] >> b[0] >> b[1] >> b[2];
    if(a[0] > b[0])
        a1++;
    else if(a[0] < b[0])
        b1++;
    else {
    
    }
    if(a[1] > b[1])
        a1++;
    else if(a[1] < b[1])
        b1++;
    else {
    
    }
    if(a[2] > b[2])
        a1++;
    else if(a[2] < b[2])
        b1++;
    else {
    
    }
    cout << a1 << " " << b1;
    return 0;
}
