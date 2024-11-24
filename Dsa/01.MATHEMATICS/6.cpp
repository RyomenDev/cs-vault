
// Prime Numbers

#include <bits/stdc++.h>
using namespace std;

int prime(int x)
{
    if ((x != 2 && x != 3) && (x % 2 == 0 || x % 3 == 0))
        return 0;
    for (int i = 5; i * i <= x; i = i + 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
            return 0;
    }
    return 1;
}

int main()
{
    int x;
    cin >> x;

    int oans = prime(x);
    string result = (oans) ? "prime." : "composite";
    cout << result << endl;

    return 0;
}