#include <iostream>
#include <math.h>
using namespace std;

// void prime(int num1, int num2)
// {
//     cout << "num1: " << num1 << " and num 2: " << num2 << endl;
//     for (int i = num1; i <= num2; i++)
//     {
//        // cout << "loop: " << i << "\n";

//         int j;
//         for (j = 2; j <= i; j++)
//         {
//             //cout << "loop: " << j - 1 << "\n";
//             if (i % j == 0)
//                 break;
//         }
//         if (j == i)
//             cout << i << " ";
//     }
//     cout << "\n";
// }

bool isprime(int num)
{
    int j;
    for (j = 2; j <= sqrt(num); j++)
    {
        if (num % j == 0)
            return false;
    }
    return true;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int t;
    cin >> t;
    while (t--)
    {
        // // cout<<"enter the two numbers:\n";
        int a, b;
        cin >> a >> b;
        // prime(a, b);
        for (int i = a; i <= b; i++)
        {
            if(isprime(i))
            cout<<i<<" ";
        }
        cout << "\n";
    }
    cout << "finished\n";

    return 0;
}