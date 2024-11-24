#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int len;
        cin >> len;

        char bin[len];
        cin >> bin;

        for (int i = 0; i < len - 2; i++)
        {
            if (bin[i] == '1' && bin[i + 1] == '1')
            {
                bin[i] = '1', bin[i + 1] = '0', bin[i + 2] = '0';
                i = 0;
            }
            if (bin[i] == '1' && bin[i + 1] == '0' && bin[i + 2] == '1')
            {
                bin[i] = '1', bin[i + 1] = '0', bin[i + 2] = '0';
                i = 0;
            }
        }
        cout << bin << endl;
    }
    return 0;
}