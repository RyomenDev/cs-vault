/*
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0;
        cin >> n;
        int d[n];
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
            if (d[i] >= 1000)
            count++;
        }
        cout << count << endl;
    }
    return 0;
}
*/
/*
#include <iostream>
using namespace std;


int main()
{
int x,y;
cin>>x>>y;
cout<<x-y<<endl;
return 0;
}
*/
/*
#include <iostream>
using namespace std;


int main()
{
int x,arr,b;
cin>>x>>arr>>b;
if(x>=(arr+b))
cout<<"Yes"<<endl;
else
cout<<"No"<<endl;

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
        int w, x, y, z;
        cin >> w >> x >> y >> z;
        int zt = x - (w + (y * z));
        if (zt == 0)
            cout << "filled" << endl;
        else if (zt < 0)
            cout << "overflow" << endl;
        else if (zt > 0)
            cout << "unfilled" << endl;
    }
    return 0;
}
*/
#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, z, z1 = 0, z2 = 0;
        cin >> n >> m;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        z = arr[0];
        for (int i = 1; i < n; ++i)
        {
            if (z < arr[i])
            {
                z = arr[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (z - arr[i] >= 0)
            {
                if (z1 < arr[i] + z + ((z - arr[i]) % m))
                {
                    z1 = arr[i] + z + (z - arr[i]) % m;
                }
            }

            else
            {
                int y = m - (((-1) * (arr[i]) - z) % m);
                z2 = arr[i] + z + y;
                if (z1 < z2)
                {
                    z1 = z2;
                }
            }
        }
        cout << z1 << endl;
    }
    return 0;
}