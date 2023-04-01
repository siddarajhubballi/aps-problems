#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,num,i;
    cin >> n;
    vector<int> arr;
    for(i=0;i<n;i++)
    {
        cin >> num;
        arr.push_back(num);
    }
    sort(arr.begin(),arr.end());
    
    for(i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
