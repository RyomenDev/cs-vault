/*
it's a special designed container such that, first element of queue is greatest of all elements.
elements are in decreasing order.
by default c++ creates a max-heap for priority queue.
*/

#include <bits/stdc++.h>
using namespace std;
// #include<queue>;

void show(priority_queue<int> pq)
{
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;
}

int main()
{
    priority_queue<int> pq;
    pq.push(10);
    pq.push(-10);
    pq.push(2);
    pq.push(5);

    // for (auto it = pq.begin(); it != pq.end(); it++)
    //     cout << *it << endl;  //doesnt work
    show(pq);
    cout<<"size : "<<pq.size()<<endl;

    pq.pop();
    show(pq);

    return 0;
}