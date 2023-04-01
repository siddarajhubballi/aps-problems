#include<iostream>

using namespace std;

int main()
{
    int n,i,count = 0;
    cin >> n;
    int a,b[100];
    for(i=0;i<=100;i++)
    {
        b[i] = 0;
    }
    for(i=0;i<n;i++)
    {
        cin >> a;
        b[a]++;
    }
    for(i=0;i<=100;i++)
    {
        count += (b[i]/2);
    }
    cout << count;
}
