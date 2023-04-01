#include<iostream>

using namespace std;

int main()
{
    int n,temp,a[2] = {0,0},min,max;
    cin >> n;
    cin >> min;
    max = min;
    n--;
    while(n--)
    {
        cin >> temp;
        if(temp > max)
        {
            max = temp;
            a[0]++;
        }
        else if(temp < min)
        {
            min = temp;
            a[1]++;
        }
    }
    cout << a[0] <<" " << a[1] << endl;
    return 0;
}
