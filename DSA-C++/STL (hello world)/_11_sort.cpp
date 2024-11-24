/*
to arrange data.
works as sort (startaddress,endaddress).
sort internally uses IntroSort (hybrid of quickSort,HeapSort,Insertion Sort)  --> by default quickSort
if quickSort is doing unfair partitioning and taking more than N*logN time it switches to HeapSort
and when the array size becomes really small it switches to insertionSort.
*/

#include <bits/stdc++.h>
using namespace std;
// #include<algorithm>

int main()
{
    int a[10] = {9, 8, 1, 2, 7, 4, 0, 5, 3, 5};
    sort(a, a + 9);
    sort(a, a + 10);
    for (int i = 0; i < 10; i++)
        cout<<a[i]<<" ";
    cout<<endl;
    

    return 0;
}