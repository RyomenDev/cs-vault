

// josephus problem
// kill every kth person in circular order
// position k-1
// circle begins from 1

// O(n)
// O(1)

#include<bits/stdc++.h>
using namespace std;

int jos(int n, int k)
{
    if (n == 1)
        return 0;

    int e = k;
    return ((n - 1, k) + k) % n;
}

int main(){
    cout<<jos(5,3)<<endl; //1
}

// if not begins from 0
// return (jos((n-1),k)+k)%n
// return myjos(n,k)+1
