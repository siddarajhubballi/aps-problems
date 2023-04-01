#include<iostream>

using namespace std;

int main()
{
    int s,t,a,b,m,n,m1;
    int t1=0,t2=0;
    cin >> s >> t >> a >> b >> m >> n;
    for(int i = 0;i<m;i++)
    {
        cin >> m1;
        if(a+m1 >= s && a+m1 <= t)
            t1++;
    }
    for(int i=0;i<n;i++)
    {
        cin >> m1;
        if(b+m1 >= s && b+m1 <= t)
            t2++;
    }
    cout << t1 << "\n" << t2;
    
    return 0;
}
