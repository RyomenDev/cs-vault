// power set using bitwise Operators

// O(2^n *n)
#include <bits/stdc++.h>
using namespace std;

int k = 1;
void powerSet(string s)
{
    int n = s.length();
    // for (int i = 0; i < (1 << n); i++)
    // {
    //     cout << k++ << ":";
    //     for (int j = 0; j < n; j++)
    //         if (i & (1 << j))
    //             cout << s[j];
    //     cout << endl;
    // }

    int powSize = pow(2, n);
    for (int i = 0; i < powSize; i++)
    {
        cout << k++ << ":";
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                cout << s[j];
        }
        cout << endl;
    }
}
/*
000     ""
001     "a"
100     "c"
010     "b"
111     "abc"
*/
int main()
{
    string s = "abc";
    powerSet(s);

    return 0;
}