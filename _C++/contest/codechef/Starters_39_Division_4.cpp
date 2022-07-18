/*
#include <iostream>
using namespace std;


int main()
{

int n,a,b;
cin>>n>>a>>b;
cout<<n-a<<" "<<n-(a+b);
return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int z = (y - x) / 8;
        if ((y - x) % 8 == 0)
        {
            cout << z << endl;
        }

        else
        {
            cout << z + 1 << endl;
        }
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int a = 0, b = 0;
        for (int i = 0; i < x; i++)
        {
            string st;
            cin >> st;;
            if (st == "START38")
            {
                a++;
            }
            if (st == "LTIME108")
            {
                b++;
            }
        }
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int f[n];
        for (int i = 0; i < n; i++)
        {
            cin >> f[i];
        }
    int a=0;
        for (int i = 0; i < n; i++)
        {
            if (f[i] == f[i + 1])
            {
                a++;
            }
        }
        cout << n-a << endl;
    }
    return 0;
}
*/
#include <iostream>
using namespace std;


int main()
{
int t;
cin>>t;
while (t--)
{
int x,y;
cin>>x>>y;
int z1=(500-x*2)+(1000-(y+x)*4);
int z2=(1000-y*4)+(500-(y+x)*2);
if(z1>z2)
cout<<z1<<endl;
else
cout<<z2<<endl;

}
return 0;
}