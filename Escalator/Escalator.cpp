#include <iostream>
using namespace std;

class Escalator
{
public:
    virtual void push(int element) = 0;
    virtual void pop() = 0;
    virtual void top_element() = 0;
    virtual void display() = 0;
    virtual bool isEmpty() = 0;
    virtual bool isFull() = 0;
};

class Stack : public Escalator
{
private:
    int *arr;
    int size;
    int top;

public:
    Stack(int size)
    {
        this->size = size;
        this->arr = new int[size];
        this->top = -1;
    }

    ~Stack()
    {
        delete[] arr;
    }

    void push(int element)
    {
        if (isFull())
        {
            cout << "Stack Overflow." << endl;
        }
        else
        {
            top++;
            arr[top] = element;
            cout << element << " pushed to stack." << endl;
        }
    }

    void pop()
    {
        if (isEmpty())
        {
            cout << "Stack Underflow." << endl;
        }
        else
        {
            cout << "Element popped: " << arr[top] << endl;
            top--;
        }
    }

    void top_element()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Top Element: " << arr[top] << endl;
        }
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "Stack is Empty." << endl;
        }
        else
        {
            cout << "Stack elements: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == size - 1;
    }
};

