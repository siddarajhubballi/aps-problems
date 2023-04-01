#include<iostream>
#include<string>

using namespace std;

int main()
{
    int h[26];
    string name;
    for(int i=0;i<26;i++)
    {
        cin >> h[i];
    }
    cin >> name;
    int leng = name.length();
    int temp = name[0];
    int max = h[temp-97];
    for(int i=1;i<leng;i++)
    {
        temp = name[i];
        if(h[temp-97]  >= max)
            max = h[temp-97];
    }
    cout << max*leng;
}
