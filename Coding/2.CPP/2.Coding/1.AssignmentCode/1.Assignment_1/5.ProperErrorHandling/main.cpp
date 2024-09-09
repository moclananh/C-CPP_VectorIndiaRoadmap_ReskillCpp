#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int *p;
    p = (int *)malloc(sizeof(int));
    if (p == NULL)
    {
        cerr << "Error: Memory allocation failed." << endl;
        return 1;
    }
    *p = 400;
    cout << *p << endl;
    free(p);

    return 0;
}