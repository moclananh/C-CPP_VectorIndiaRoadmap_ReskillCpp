#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> v1;                             // vector class object v1 created and called default constructor
    cout << "no of ele: " << v1.size() << endl; // it will give the number of elements in vector
    v1.push_back(20);                           // adding the element at last position
    v1.push_back(30);
    v1.push_back(40);
    v1.insert(v1.begin(), 100);     // 0th first position adding
    v1.insert(v1.begin() + 2, 150); // 2nd position adding

    cout << v1.at(4);

    vector<int>::iterator ptr;                     // ptr is iterator object (smart pointer)
    for (ptr = v1.begin(); ptr != v1.end(); ptr++) // v1.begin() gives starting address,v1.end() gives last address

        *ptr = 34;
    cout << *ptr << endl; // dereferenceing and printing the content

    v1.pop_back(); // last element
    v1.pop_back(); // last element

    vector<int>::const_iterator ptr1;                 // ptr is constant iterator object (smart pointer)
    for (ptr1 = v1.begin(); ptr1 != v1.end(); ptr1++) // v1.begin() gives starting address,v1.end() gives last address
        // *ptr1=200; // modification not possible
        cout << *ptr1 << endl; // dereferenceing and printing the content

    cout << v1.at(2) << endl; // getting 2nd posiiton value
}