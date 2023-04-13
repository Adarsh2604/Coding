/*###################################*****(ADARSH)*****################################*/
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

//  First base class
class student
{
protected:
    int roll;

public:
    void set_roll(int);
    void get_roll();
};
void student::set_roll(int r)
{
    roll = r;
}
void student::get_roll()
{
    cout << "Roll number is " << roll << endl;
}

//First inheritance is done in public mode (visiblity mode)
class exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};
void exam ::set_marks(float m1, float m2)
{
    maths = m1;
    physics = m2;
}
void exam ::get_marks()
{
    cout << "The marks in maths are " << maths << endl;
    cout << "The marks in physics are " << physics << endl;
}

//Second inheritance is done in public mode (visibility mode)
class result : public exam
{
    float percentage;

public:
    void display()
    {
        get_roll();
        get_marks();
        cout << "Result is " << (maths + physics) / 2 << "%" << endl;
    }
};

int main()
{
    result Adarsh;
    Adarsh.set_roll(100);
    Adarsh.set_marks(95, 94);
    Adarsh.display();

    return 0;
}