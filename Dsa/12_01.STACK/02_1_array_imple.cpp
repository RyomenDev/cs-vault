
#include <iostream>
using namespace std;

struct MyStack
{
    int *arr; // dyanamic memory allocation
    int cap;  // capacity
    int top;
    MyStack(int c)
    {
        cap = c;
        arr = new int[c];
        top = -1;
    }
    void push(int x)
    {
        if (top == cap - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        top++;
        arr[top] = x;
    }
    int pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        int res = arr[top];
        top--;
        return res;
    }
    int top()
    {
        return arr[top];
    }
    int size()
    {
        return (top + 1);
    }
    bool isEmpty()
    {
        return (top == -1);
    }
};

int main()
{
    MyStack s(5);
    s.push(1);
    s.push(2);
    s.push(3);
    cout << s.pop() << endl;
    cout << s.top() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    return 0;
}