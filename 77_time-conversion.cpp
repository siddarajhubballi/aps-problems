#include<iostream>
#include<string>
#include<sstream>

using namespace std;
 
int main()
{
    string time1;
    cin >> time1;
    stringstream ss1,ss2; 
    if(time1[8] == 'P' && time1[0] == '1' && time1[1] == '2')
    {
        for(int i=0;i<8;i++)
        {
            cout << time1[i];
        }
        return 0;
    }
    if(time1[8] == 'A' && time1[0] != '1' && time1[1] != '2')
    {
        for(int i=0;i<8;i++)
        {
            cout << time1[i];
        }
    }
    else 
    {
        ss1 << time1[0];
        int a;
        ss1 >> a;
        int b;
        ss2 << time1[1];
        ss2 >> b;
        int c = a*10 + b;
        
        int d = (c + 12);
        
        string e = to_string(d);
        if(time1[0] == '1' && time1[1] == '2')
        {
            e = "00";
        }
        time1[0] = e[0];
        time1[1] = e[1];
        for(int i=0;i<8;i++)
        {
            cout << time1[i];
        }
    }
    return 0;
}
