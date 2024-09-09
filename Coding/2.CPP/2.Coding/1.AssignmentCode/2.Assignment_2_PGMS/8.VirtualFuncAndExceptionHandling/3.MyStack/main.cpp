#include <iostream>
#include <stdexcept>

class Stack
{
protected:
    int *arr;
    int top;
    int max_size;

public:
    Stack(int size) : max_size(size), top(-1)
    {
        arr = new int[max_size];
    }

    virtual void push(int value)
    {
        arr[++top] = value; // error overflow maybe here
    }

    virtual int pop()
    {
        return arr[top--]; // error underflow maybe here
    }

    int peek() const
    {
        return arr[top];
    }

    bool isFull() const
    {
        return top == max_size - 1;
    }

    bool isEmpty() const
    {
        return top == -1;
    }

    ~Stack()
    {
        delete[] arr;
    }
};

// Stack upgrade class
class MyStack : public Stack
{
public:
    MyStack(int size) : Stack(size) {}

    void push(int value) override
    {
        if (isFull())
        {
            throw std::overflow_error("Stack Overflow: Stack full.");
        }
        Stack::push(value);
    }

    int pop() override
    {
        if (isEmpty())
        {
            throw std::underflow_error("Stack Underflow: Stack empty.");
        }
        return Stack::pop();
    }
};

int main()
{
    MyStack stack(3); // Size = 3
    try
    {
        stack.push(10);
        stack.push(20);
        stack.push(30);

        // Overflow error
        stack.push(40);
    }
    catch (const std::overflow_error &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try
    {
        std::cout << "Element pop: " << stack.pop() << std::endl;
        std::cout << "Element pop: " << stack.pop() << std::endl;
        std::cout << "Element pop: " << stack.pop() << std::endl;

        // Underflow error
        stack.pop();
    }
    catch (const std::underflow_error &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}