#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r, c;
    cin >> r >> c;

    int arr[r][c];

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            cin >> arr[i][j];

    int rs = 0, re = r - 1, cs = 0, ce = c - 1;

    while (rs <= re && cs <= re)
    {
        // row start
        for (int col = cs; col <= ce; col++)
            cout << arr[rs][col]<<" ";
        rs++;

        // coloum end
        for (int row = rs; row <= re; row++)
            cout << arr[row][ce]<<" ";
        ce--;

        // for row end
        for (int col = ce; col >= cs; col--)
            cout << arr[re][col]<<" ";
        re--;

        // for column start
        for (int row = re; row >= rs; row--)
            cout << arr[row][cs] << " ";
        cs++;

    }

    return 0;
}

// 12:00