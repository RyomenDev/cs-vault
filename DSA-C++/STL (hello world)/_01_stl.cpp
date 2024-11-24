#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {6, 4, 3, 8, 9, 1, 0, 2, 5, 7};
    sort(a, a + 10); // #include<algorithm>
    cout << a << endl;
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    cout << endl;
    
    return 0;
}

/*
components od STL
ALgorithms
Containers
Functions
Iterators
*/