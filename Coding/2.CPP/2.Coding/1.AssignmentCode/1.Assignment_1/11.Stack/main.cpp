#include <iostream>
using namespace std;

class Stack
{
    int *arr;
    int top;
    int capacity;

public:
    Stack(int initCapcity = 10) : top(-1), capacity(initCapcity)
    {
        arr = new int[capacity];
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int element);
    int pop();
    int peek();
    bool isEmpty();
    bool isFull();
};

bool Stack::isFull()
{
    return top == capacity - 1;
}

bool Stack::isEmpty()
{
    return top == -1;
}

void Stack::push(int element)
{
    if (isFull())
    {
        // if the stack is full, reallocate with double the capacity
        int *newArr = new int[capacity * 2];
        for (int i = 0; i < capacity; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity *= 2;
    }
    arr[++top] = element;
}

int Stack::pop()
{
    if (isEmpty())
    {
        cerr << "Stack empty" << endl;
        return -1;
    }
    return arr[top--];
}

int Stack::peek()
{
    if (isEmpty())
    {
        cerr << "Stack empty" << endl;
        return -1;
    }
    return arr[top];
}

int main(int argc, char const *argv[])
{
    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << "Peek: " << s.peek() << endl; // prints 3

    int popped = s.pop();
    cout << "Popped: " << popped << endl; // prints 3

    s.push(4);
    s.push(5);

    while (!s.isEmpty())
    {
        cout << "Popped: " << s.pop() << endl;
    }

    return 0;
}
