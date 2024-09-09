#include <iostream>
using namespace std;
int main()
{

    int a[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *q, *w, *e;

    q = a + 3;
    w = a + 5;
    e = a + 7;
    cout << *q << *w << *e;
    // for (const auto &i : b)
    // {
    //     cout << i << " ";
    // }
}