
// stack :: last in first out

// isEmpty(), push(x), pop(), top(), size()

// underflow : when pop() called on empty stack

//  overflow : when push called on a full stack

#include <iostream>
#include <stack>
using namespace std;

int main()
{
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);

    cout << s.top() << endl;   // 3
    cout << s.empty() << endl; // false

    cout << "size: " << s.size() << std::endl;

    while (!s.empty())
    {
        cout << s.top() << std::endl;
        s.pop();
    }
}