/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
using namespace std;
class base1
{
public:
    void greet()
    {
        cout << "HELLO BOYS !!!" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "HELLO GIRLS !!!" << endl;
    }
};
// In this derived class we will have to specify the class to be inherited   ------>
// Otherwise ambiguity will occur ...............>
class derived : public base1, public base2
{
    int a;

public:
    void greet()
    {
        // base2::greet();
        base1::greet();
    }
};

int main()
{
    derived d;
    d.greet();
    base1 obj1;
    obj1.greet();
    base2 obj2;
    obj2.greet();

    return 0;
}