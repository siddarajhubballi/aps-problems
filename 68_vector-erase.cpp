#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,k,n1,n2;
    cin >> n;
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        cin >> k;
        v1.push_back(k);
    }
    cin >> k;
    v1.erase(v1.begin() + k-1);
    cin >> n1 >> n2;
    v1.erase(v1.begin()+n1-1,v1.begin()+n2-1);
    
    int i=0;
    cout << v1.size() << endl;
    n = v1.size();
    while(n--)
    {
        cout << v1[i++] << " ";
    }
    return 0;
}
