// /*###################################*****{ADARSH}*****################################*/
// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     string st = "ADARSH GUPTA!!!!";
//     ofstream out("Files_a.txt"); // Write operation
//     out << st;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int main()
{

    string st2;
    // Opening files using constructor and reading it------->

    ifstream in("Files_b.txt");     // Read operation
    in >> st2;
    getline(in, st2);
    cout << st2;

    return 0;
}
