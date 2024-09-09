#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    int top;
    int capacity;
    T *arr;

public:
    Stack(int size = 10) : top(-1), capacity(size), arr(new T[capacity]) {}
    ~Stack() { delete[] arr; }
    void push(T st);
    T pop();
    T topElement();
    bool isEmpty();
    bool isFull();
};

template <class T>
void Stack<T>::push(T st)
{
    if (isFull())
    {
        T *newArr = new T[capacity * 2];
        if (!newArr)
        {
            throw runtime_error("Memory allocation failed");
        }
        for (int i = 0; i < capacity; i++)
        {
            newArr[i] = arr[i];
        }
        delete[] arr;
        arr = newArr;
        capacity *= 2;
    }
    arr[++top] = st;
}

template <class T>
T Stack<T>::pop()
{
    if (isEmpty())
    {
        throw runtime_error("Stack is empty");
    }
    return arr[top--];
}

template <class T>
T Stack<T>::topElement()
{
    if (isEmpty())
    {
        throw runtime_error("Stack is empty");
    }
    return arr[top];
}

template <class T>
bool Stack<T>::isEmpty()
{
    return top == -1;
}

template <class T>
bool Stack<T>::isFull()
{
    return top == capacity - 1;
}

int main()
{
    try
    {
        Stack<int> intStack;
        Stack<double> doubleStack;
        Stack<char> charStack;

        // Push some elements onto the stacks
        intStack.push(1);
        intStack.push(2);
        intStack.push(3);

        doubleStack.push(3.14);
        doubleStack.push(2.71);

        charStack.push('a');
        charStack.push('b');
        charStack.push('c');

        // Pop elements from the stacks
        cout << "Popped from intStack: " << intStack.pop() << endl;
        cout << "Popped from doubleStack: " << doubleStack.pop() << endl;
        cout << "Popped from charStack: " << charStack.pop() << endl;
    }
    catch (const runtime_error &e)
    {
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}