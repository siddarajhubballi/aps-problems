#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

/*
 * Complete the 'minimumNumber' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. STRING password
 */

int minimumNumber(int n, string password) {
    string numbers, lower_case, upper_case, special_characters;
    numbers = "0123456789";
    lower_case = "abcdefghijklmnopqrstuvwxyz";
    upper_case = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    special_characters = "!@#$%^&*()-+";
    int f1=0,f2=0,f3=0,f4=0;
    for(int i=0;i<n;i++) {
        for(int j=0;j<numbers.length();j++) {
            if(password[i] == numbers[j]) {
                f1 = 1;
                break;
            }
        }
        if(f1 == 1) {
            break;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<lower_case.length();j++) {
            if(password[i] == lower_case[j]) {
                f2 = 1;
                break;
            }
        }
        if(f2 == 1) {
            break;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<upper_case.length();j++) {
            if(password[i] == upper_case[j]) {
                f3 = 1;
                break;
            }
        }
        if(f3 == 1) {
            break;
        }
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<special_characters.length();j++) {
            if(password[i] == special_characters[j]) {
                f4 = 1;
                break;
            }
        }
        if(f4 == 1) {
            break;
        }
    }
    int count1 = 0;
    int len = password.length();
    if(f1 == 0) {
        count1++;
        len++;
    }
    if(f2 == 0) {
        count1++;
        len++;
    }
    if(f3 == 0) {
        count1++;
        len++;
    }
    if(f4 == 0) {
        count1++;
        len++;
    }
    if(len < 6) {
        count1 += (6-len);
    }
    return count1;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string password;
    getline(cin, password);

    int answer = minimumNumber(n, password);

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
