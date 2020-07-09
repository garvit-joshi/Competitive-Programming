#include <iostream>
#include <sstream>
using namespace std;

class Student
{
    int age, standard;
    string first_name, last_name;
    public:
    void set_age(int aage)
    {
        age=aage;
    }
    void set_standard(int sstandard)
    {
        standard=sstandard;
    }
    void set_first_name(string ffirst_name)
    {
        first_name=ffirst_name;
    }
    void set_last_name(string llast_name)
    {
        last_name=llast_name;
    }
    int get_age()
    {
        return age;
    }
    int get_standard()
    {
        return standard;
    }
    string get_first_name()
    {
        return first_name;
    }
    string get_last_name()
    {
        return last_name;
    }
    string to_string()
    {
        stringstream sstm;
        sstm<<age<<","<<first_name<<","<<last_name<<","<<standard;
        return sstm.str();
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
