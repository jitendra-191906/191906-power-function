#include <iostream>
#include <string>
using namespace std;
 class MyString
{
private:
    string s1;
    string s2;

public:
    void show_string(string a, string b)
    {
        s1 = a;
        s2 = b;
    }

    void add_string(string a, string b)
    {
        cout << "add of string 1 and string 2 is  " << a + b << endl;
    }
    void equate_string(string a, string b)
    {
        cout << "check  " << a << "  and  " << b << " is equal or not" << endl
             << endl;
        if (a == b)
        {
            cout << a << " is equal to " << b << endl;
        }
        else
        {
            cout << a << " is not equal to " << b << endl;
        }
    }
    void display()
    {
        cout << " string 1 is: " << s1 << endl
             << "string 2 is: " << s2 << endl;
    }
};
int main()
{
    MyString name;
    string a1, a2;
    cout << "enter your string 1" << endl;
    cin >> a1;
    cout << "enter your string 2" << endl;
    cin >> a2;

    name.show_string(a1, a2);
    cout << "-------------------------------------------------" << endl;//takes string from user
    name.add_string(a1, a2);
    cout << "-------------------------------------------------" << endl;//add of these string
    name.equate_string(a1, a2);
    cout << "-------------------------------------------------" << endl;//compare of string
    name.display();
}