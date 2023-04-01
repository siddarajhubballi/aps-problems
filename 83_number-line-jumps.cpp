#include<iostream>

using namespace std;

int main()
{
    int x1,v1,x2,v2,i=0;
    cin >> x1 >> v1 >> x2 >> v2;
    while(x1 != x2)
    {
        i++;
        x1 += v1;
        x2 += v2;
        if(i >= 10000)
        {
            cout << "NO";
            return 0;
        }
    }
   // cout << x1 << x2;
    cout << "YES";
    return 0;
}
