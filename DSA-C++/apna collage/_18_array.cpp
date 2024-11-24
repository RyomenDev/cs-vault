#include <iostream>
#include <climits> // --> INT_MIN INT_MAX
using namespace std;

int main()
{

    int array[4] = {1, 2, 3, 4};

    cout << array[2] << endl;

    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << "\n";

    // int max1 = arr[1], min = arr[1];

    int min1 = INT_MAX, max1 = INT_MIN; //--> min ,max possible integers

    for (int i = 0; i < n; i++)
    {
        // if (arr[i] > max)
        //     max = arr[i];
        // if (arr[i] < min)
        //     min = arr[i];
        max1 = max(max1, arr[i]);
        min1 = min(min1,arr[i]);
    }
    cout << min1 << "  " << max1 << endl;

    return 0;
}