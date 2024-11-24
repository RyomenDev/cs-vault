#include <iostream>
using namespace std;

void fib(int n)
{
    int t1 = 0, t2 = 1,sum=0;
    int nextterm;
    for (int i = 1; i <= n; i++)
    {
        cout<<t1<<" ";
        sum+=t1;
        nextterm = t1 + t2;
        t1=t2;
        t2=nextterm;  
    }
    cout<<": sum="<<sum;
}

int main()
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;

        fib(x);
        cout<<"\n";
    }
    return 0;
}