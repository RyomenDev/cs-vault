/*
these Algorithms are only vaild for Arrays
all_of | any_of | none_of | copy_n | iota
tertinanry operator  codition?(true):(false)
*/

#include <bits/stdc++.h>
// #include <algorithm>
// #include<numeric>  //for iota
using namespace std;

int main()
{
    int a[6] = {2, 5, -6, 7, 9, 1};
    all_of(a, a + 6, [](int x)
           { return x > 0; }) // condition
        ? cout << "true\n"
        : cout << "false\n";

    // similarly any_of | none_of

    int a2[6];
    copy_n(a, 6, a2);
    for (int i = 0; i < 6; i++)
        cout << a2[i] << " ";
    cout << endl;

    int a3[6]; // 2 3 4 5 6 7
    iota(a3, a3 + 6, 3);
    for (int i = 0; i < 6; i++)
        cout << a3[i] << " ";
    cout << endl;

    return 0;
}