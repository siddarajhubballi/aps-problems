#include <iostream>
#include <sstream>
#include <cstring>

using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student
{
    private:
    int age,standard;
    string first_name,last_name;
    public:
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    void set_first_name(string name)
    {
       first_name = name;
    }
    void set_last_name(string name)
    {
       last_name = name;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    void set_age(int a)
    {
        age = a;
    }
    void set_standard(int a)
    {
        standard = a;
    }
     string to_string()
    {
        stringstream ss1,ss2;
        string sage,sstandard;
        ss1 << age;
        ss1 >> sage;
        ss2 << standard;
        ss2 >> sstandard;
        string init = sage;
        init.append(",");
        init.append(first_name);
        init.append(",");
        init.append(last_name);
        init.append(",");
        init.append(sstandard);
        return init;
    }
};

int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
