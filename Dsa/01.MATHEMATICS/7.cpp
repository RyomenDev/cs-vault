
// Prime FACtORS

#include <bits/stdc++.h>
using namespace std;

int prime(int x)
{
    if ((x != 2 && x != 3) && (x % 2 == 0 || x % 3 == 0))
        return 0; // composite
    for (int i = 5; i * i <= x; i = i + 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
            return 0; // composite
    }
    return 1; // prime
}

int primeFactors(int x)
{
    int n = x;
    if (prime(x))
    {
        cout << "prime" << endl;
        return x;
    }
    for (int i = 2; i <= x; i++)
    // for (int i = 2; i*i<= n; i++)
    {
        if (prime(i))
        {
            // cout<<"i="<<i<<endl;
            // int z=i;
            // while (x % z == 0)
            while (x % i == 0)
            {
                cout << i << " ";
                x = x / i;
                // z=z*i;
            }
        }
    }
}

int main()
{
    int x;
    cin >> x;

    primeFactors(x);

    return 0;
}