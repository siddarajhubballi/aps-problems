#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'pangrams' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string pangrams(string s) {
    
    vector<int> a(26,0);
    for(int i=0;i<s.size();i++) {
        int a1 = 'a';
        int a2 = 'z';
        int a3 = 'A';
        int a4 = 'Z';
        if(int(s[i]) >= 'a' && int(s[i]) <= 'z') {
            a[s[i]-'a'] = 1; 
        }
        else {
            a[s[i]-'A'] = 1;
        }
    }
    for(int i=0;i<a.size();i++) {
        if(a[i] == 0) {
            return "not pangram";
        }
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
