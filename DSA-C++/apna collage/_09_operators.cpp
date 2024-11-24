// relational; 
#include <iostream>
using namespace std; 


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

int i=5;

cout<<++i<<" & "<<i++;  //7 & 5

return 0;
}