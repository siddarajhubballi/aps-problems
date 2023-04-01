#include<iostream>

using namespace std;

int main()
{
    int n,i;
    long long a;
    long long sum = 0;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a;
        sum += a;
    }
    cout << sum;
    return 0;
}
