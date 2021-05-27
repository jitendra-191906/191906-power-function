#include <iostream>
#include <math.h>
using namespace std;
class def_power
{
private:
    int base;
    int power;

public:
    // parmeterised constructor
    def_power(int a, int b)
    {

        base = a;
        power = b;
        // cout << "store the value of a and b in base and power respectively" << endl;
    }
    def_power() //overloading  constructor with no parameters
    {
        cout << "power = 0" << endl;
    }
    def_power(int a) // overloading  constructor with one parameters
    {
        int b = 2;
        cout << a << " power " << b << " is= " << pow(a, b) << endl;
    }

    def_power(def_power &obj) //copy constructor
    {
        base = obj.base;
        power = obj.power;

        cout << base << " power " << power << " is  = " << pow(base, power) << endl;
    }
};
int main()
{

    int x, y;
    cout << "enter base and power seprate with space" << endl;
    cin >> x >> y;
    cout << "when no argument pass" << endl;
    def_power p0;
    cout << "-----------------" << endl;
    cout << "when one argument passed" << endl;
    def_power p1(x);
    cout << "when two argument passed" << endl;
    def_power p2(x, y);
    cout << "-----------------" << endl;
    cout << "copy constructor" << endl;
    def_power p3 = p2;
}