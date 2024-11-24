
#include <iostream>
#include <vector>
using namespace std;

struct MyStack
{
    vector<int> v;
    void push(int x)
    {
        v.push_back(x);
    }
    int pop()
    {
        if (v.size() == 0)
        {
            cout << "Stack Underflow" << endl;
            return -1;
        }
        int res = v.back();
        v.pop_back();
        return res;
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool isEmpty()
    {
        return v.empty();
    }
};

int main()
{
    MyStack s;
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