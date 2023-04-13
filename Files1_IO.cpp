// #include <iostream>
// #include <fstream>
// using namespace std;

// int main()
// {
//     ofstream out;
//     out.open("Files_a.txt");
//     out << "This is me\n ";
//     out << "This is Adarsh\n ";
//     out.close();

//     return 0 ;

// }
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // declaring an object of the type ifstream
    ifstream in;
    // declaring string variable st
    string st;
    // opening the text file into in
    in.open("Files_a.txt");

    // giving output the string lines by storing in st until the file reaches the end of it
    while (in.eof() == 0)
    {
        // using getline to fill the whole line in st
        getline(in, st);
        cout << st << endl;
    }
    return 0;
}
