#include<iostream>

using namespace std;

int main()
{
    int n,k,b[100000],i,temp;
    cin >> n >> k;
    int avg2 = 0;
    for(i=0;i<n;i++)
    {
        cin >> b[i];
        if(i==k)
            temp = b[i];
        else {
        avg2 = avg2 + b[i];
        }
    }
    int bill;
    cin >> bill;
    avg2 = avg2/2;
    if(avg2 == bill)
        cout << "Bon Appetit" << endl;
    else {
    cout << bill - avg2;
    }
    return 0;
}
