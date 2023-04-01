#include<iostream>

using namespace std;

int main()
{
    int bu,n,m;
    int a[1000];
    int b[1000];
    cin >> bu >> n >> m;
    for(int i = 0;i<n;i++)
    {
        cin >> a[i];
    }
    for(int i = 0;i<m;i++)
    {
        cin >> b[i];
    }
    int max = 0;
    for(int i = 0;i<n;i++)
    {
        for(int j = 0;j<m;j++)
        {
            if(a[i]+b[j] <= bu && a[i]+b[j] > max)
                max = a[i]+b[j];
        }
    }
    if(max == 0)
    {
        cout << -1;
        return 0;
    }
    cout << max;
    return 0;
}
