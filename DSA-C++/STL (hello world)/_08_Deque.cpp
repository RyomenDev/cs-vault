/*
// Double ended queue
*/
#include <bits/stdc++.h>
using namespace std;

void print(deque<int> dq)
{
    for (auto it = dq.begin(); it != dq.end(); it++)
        cout << *it << "  ";
    cout << endl;
}

int main()
{
    deque<int> dq;

    dq.push_back(5);
    dq.push_back(7);
    dq.push_front(8);
    dq.push_front(3);

    cout<<"size : "<<dq.size()<<endl;
    print(dq);

    cout<<dq.at(2)<<endl; // index
    cout<<dq.front()<<endl;


    return 0;
}