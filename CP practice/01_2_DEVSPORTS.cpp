#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int z, y, a, b, c;
        cin >> z >> y >> a >> b >> c;
        if ((z - y) >= (a + b + c))
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}