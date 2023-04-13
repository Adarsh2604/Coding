#include <iostream>
using namespace std;

class BaseClass
{
public:
    int var_base = 1;
    // Virtual functions --A virtual function in C++ is a base class member function that you can redefine in a derived class to achieve polymorphism.
    virtual void display()
    {
        cout << "1 Dispalying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "2 Displaying Base class variable var_base " << var_base << endl;
        cout << "2 Displaying Derived class variable var_derived " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;

    base_class_pointer = &obj_derived;
    base_class_pointer->display();
    return 0;
}