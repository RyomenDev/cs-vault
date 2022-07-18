// sum of first n numbers

// to check pythagorian triplet

#include <bits/stdc++.h>
using namespace std;

bool pytha(int a, int b, int c)
{
    int x = max(a, max(b, c)); // max of a,b,c

    int y, z;

    if (x == a)
    {
        y = b;
        z = c;
    }
    else if (x == b)
    {
        y = a;
        z = c;
    }
    else
    {
        y = a;
        z = b;
    }

    cout << x << "  " << y << "  " << z << "  " << endl;

    cout << x * x << " : " << y * y + z * z << endl;

    if (x * x == (y * y + z * z))
        return true;
    else
        return false;
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (pytha(a, b, c))
        cout << "pythagorean triplet\n";
    else
        cout << "not a pythagorean triplat.\n";

    return 0;
}

