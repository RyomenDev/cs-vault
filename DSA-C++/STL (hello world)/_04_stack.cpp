/*
stack is a container
it has concept of LIFO (last in first out)

*/

#include <bits/stdc++.h>
using namespace std;
#include <stack>

void printStack(stack<int> st){
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}

int main()
{
    stack<int> s;
    s.push(3);
    s.push(-5);
    s.push(8);

    cout << s.empty() << endl;
    cout << s.size() << endl;

    printStack(s);

    return 0;
}