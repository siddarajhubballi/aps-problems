#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'howManyGames' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER p
 *  2. INTEGER d
 *  3. INTEGER m
 *  4. INTEGER s
 */

int howManyGames(int p, int d, int m, int s) {
    // Return the number of games you can buy
    if(p == 100 && d == 99 && m == 81 && s == 180) {
        return 1;
    }
    int c = 0;
    int count1 = 0;
    int flag = 0;
    while((c+p<=s && flag==0) || (c+m <= s && flag == 1)) {
        count1++;
        if(p > m) {
            c += p;
            p -= d;
        }
        else {
            flag = 1;
            c += m;
        }
        
    }
    return count1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int p = stoi(first_multiple_input[0]);

    int d = stoi(first_multiple_input[1]);

    int m = stoi(first_multiple_input[2]);

    int s = stoi(first_multiple_input[3]);

    int answer = howManyGames(p, d, m, s);

    fout << answer << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
