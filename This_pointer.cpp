/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
using namespace std;
class A
{
    int a;

public:
    void setdata(int a)
    {
        // this pointer 
     this->a = a;
    }
    void getdata()
    {
        cout << "The value of a is " << a <<"."<< endl;
    }
};
int main()
{
    A a;
    a.setdata(45);
    a.getdata();

    return 0;
}