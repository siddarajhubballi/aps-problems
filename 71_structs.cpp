#include<iostream>

using namespace std;

struct Student
{
    int age;
    string first;
    string last;
    int std;
};

int main()
{
    int age,std;
    string f,l;
    cin >> age >> f >> l >> std;
    struct Student s1;
    s1.age = age;
    s1.first = f;
    s1.last = l;
    s1.std = std;
    cout << s1.age << " " << s1.first << " " << s1.last << " " << s1.std << endl;
    return 0;
}
