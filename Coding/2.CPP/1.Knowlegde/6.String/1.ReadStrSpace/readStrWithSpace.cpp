// reading string from the user
#include <iostream>
using namespace std;
main()
{

    char s[10]; // char array
    cout << "enter string ";
    cin.getline(s, 30);                // read string with space
    cout << "str char: " << s << endl; // printing

    // input 1: vector
    // output 1: vector

    // input2: vector india banaglore
    // output2: vector india banaglore along with this you will get error
    //  stack smashing detected .....

    // because of less memory you have
    cout << "enter new string: ";
    string str;
    getline(cin, str);
    cout << "str datadtype: " << str << endl;
}