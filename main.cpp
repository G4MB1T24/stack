#include <iostream>
using namespace std;

class Stack
{
    int top;

public:
    Stack() { top = -1; }
    int n = 5;
    int stack[5];

public:
    void push(int x)
    {
        if (top >= n - 1)
        {
            cout << "Stack is full" << endl;
        }
        top++;
        stack[top] = x;
        cout << "Element inserted in the stack" << endl;
    }

public:
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
        }
        top = top - 1;
    }

public:
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

public:
    void traverse()
    {
        if (isEmpty())
        {
            cout << "Stack is empty" << endl;
        }
        for (int i = top; i >= 0; i--)
        {
            cout << stack[i] << endl;
        }
    }
};

int main()
{
    Stack s;
    s.push(6);
    s.push(5);
    s.push(7);
    s.push(8);
    s.traverse();
    s.pop();
    cout << endl;
    s.traverse();
    return 0;
}