#include <iostream>
#include <stack>
using namespace std;

int main(int argc, char const *argv[])
{
    stack<char> char_stack;
    char element;

    cout << "Enter charactor to push onto stack: " << endl;
    while (true)
    {
        cin >> element;
        if (element == '0')
        {
            break;
        }
        char_stack.push(element);
    }

    cout << "-----Stack-------" << endl;
    while (!char_stack.empty())
    {
        cout << char_stack.top() << " ";
        char_stack.pop();
    }

    return 0;
}
