#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, a=0;
        cin >> x;
        int n[x];
        for (int i = 0; i < x; i++)
        {
            cin >> n[i];
        }
        for (int i = 0; i < x; i++)
        {
            for (int j = 0; j < x; j++)
            {
                if (n[i] == n[j])
                    a++;
            }
            if (a % 2 == 1){
                cout << n[i] << endl;
            a = 0;
            break;
            }
        }
    }
    return 0;
}