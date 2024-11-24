/*
queue is a container
it has FIFO structure (First In First Out)
*/
#include <bits/stdc++.h>
using namespace std;
// #include<queue>;
void printQueue(queue<int> q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    queue<int> q;
    q.push(10);
    q.push(-5);
    q.push(7);

    printQueue(q);

    cout << "size : " << q.size() << endl;
    cout << "front : " << q.front() << endl;
    cout << "end : " << q.back() << endl;

    q.pop(); // remove first element
    printQueue(q);

    return 0;
}