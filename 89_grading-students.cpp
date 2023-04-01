#include<iostream>

using namespace std;

int main()
{
    int n,a;
    cin >> n;
    while(n--)
    {
        cin >> a;
        if(a < 38)
            cout << a << endl;
        else if(a%5 >= 3)
            cout << a + 5 - a%5 << endl;
        else {
            cout << a << endl;
        }
    }
    return 0;
}
