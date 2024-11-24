
/*
pair container is simple container.
it uses a <utility> header file.
it have data in pair.
*/

#include <bits/stdc++.h>
using namespace std;
// #include<utility>;

int main()
{
    pair<int, char> pr1;
    pr1.first = 100;
    pr1.second = 'A';
    cout << pr1.first << " " << pr1.second << endl;

    pair<string, double> pr2("ben", 100.12); // in ""
    cout << pr2.first << " " << pr2.second << endl;

    pair<string, double> pr3;
    pr3 = make_pair("ten", 232.78); // in ""
    cout << pr3.first << " " << pr3.second << endl;

    pair<int, int> pr4 = make_pair(10, 232.78); // in ""
    cout << pr4.first << " " << pr4.second << endl;

    pair<int, int> pr5(pr4); // copy pr4 in pr5
    cout << pr5.first << " " << pr5.second << endl;

    cout<<(pr4==pr5)<<endl; // if both types are same
    cout<<(pr4>pr5)<<endl; // only first element compared

    pair<int, int> pr6 = make_pair(87, 12);
    pr4.swap(pr6); // swapped
    cout << pr4.first << " " << pr4.second << endl;

    return 0;
}