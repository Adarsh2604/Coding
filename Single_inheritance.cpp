/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// Base class is made here
class base
{
    int data1;

public:
    int data2;
    void setdata();
    int getdata1();
    int getdata2();
};
void base ::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int base::getdata1()
{
    return data1;
}
int base::getdata2()
{
    return data2;
}
// Derived class is made here
class derived : public base
{
    int data3;

public:
    void process();
    void display();
};
void derived::process()
{
    data3 = data2 * getdata1();
}
void derived ::display()
{
    cout << "value of data1 is " << getdata1() << endl;
    cout << "value of data2 is " << data2 << endl;
    cout << "value of data3 is " << data3 << endl;
}

int main()
{

    derived d;
    d.setdata();
    d.process();
    d.display();

    return 0;
}