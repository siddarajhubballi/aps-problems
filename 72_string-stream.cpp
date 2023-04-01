#include<iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int len = s.length();
    int i=0;
    while(len--)
    {
        if(s[i] == ',')
        {
            i++;
            cout << endl;
        }
        else {
        cout << s[i];
        i++;
        }
    }
    return 0;
}
