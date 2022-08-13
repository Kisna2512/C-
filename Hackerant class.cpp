#include <iostream>

using namespace std;

class student
{
public:
    int age;
    string first_name;
    string last_name;
    int standard;

    void set_age()
    {
        cin >> age;
    }
    void get_age()
    {
        cout << age;
    }
    void set_first_name()
    {
        cin >> first_name;
    }
    void get_first_name()
    {
        cout << first_name;
    }
    void set_last_name()
    {
        cin >> last_name;
    }
    void get_last_name()
    {
        cout << last_name;
    }
    void set_standard()
    {
        cin >> standard;
    }
    void get_standard()
    {
        cout << standard;
    }
};
int main()
{
    student st;
    st.set_age();
    st.set_first_name();
    st.set_last_name();
    st.set_standard();
    st.get_age();
    cout << endl;
    st.get_last_name();
    cout << ",";
    st.get_first_name();
    cout << endl;
    st.get_standard();
    cout<<endl;
    cout<<endl;
    cout<<endl;
    st.get_age();
    cout << ",";
    st.get_first_name();
    cout << ",";
    st.get_last_name();
    cout << ",";
    st.get_standard();

    return 0;
}