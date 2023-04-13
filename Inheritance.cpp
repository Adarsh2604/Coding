/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
// base class is made here 
class employee
{
public:
    int id;
    float salary;
    employee(int inpid)
    {
        id = inpid;
        salary = 340000.0;
    }
    employee() {}
};
// creating a programmer class DERIVED  from employee class
class programmer : public employee
{
public:
    int langcode;
    programmer(int inpid)
    {
        id = inpid;
        langcode = 19;
    }
    void getdata()
    { 
        cout << id << endl;
    }
};

int main()
{
    employee Adarsh(1), Chotu(2);
    cout << Adarsh.salary << endl;
    cout << Chotu.salary << endl; 
    programmer skillf(10);
    cout << skillf.langcode << endl;
    cout << skillf.id << endl;
    skillf.getdata();

    return 0;
}