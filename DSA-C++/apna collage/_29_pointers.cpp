
// pointers are variables that store the address of other variables.
#include<bits/stdc++.h>
using namespace std; 


int main()
{
int a=10;
int *a_ptr;
a_ptr=&a;

cout<<&a<<endl;
cout<<*a_ptr<<"  "<<a_ptr<<" "<<&a_ptr<<endl;

*a_ptr=20;
cout<<*a_ptr<<endl;

int arr[]={1,2,3};
//int *ptr_=arr;  // correct
cout<<*arr<<endl;
cout<<arr<<endl;

for (int i = 0; i < 3; i++)
    cout<<*(arr+i)<<endl;

// pointer to pointer
int **q=&a_ptr;
cout<<**q<<" "<<*q<<" "<<q<<" "<<&q<<endl;

// im function pointers are passes by reference ; change in reflected in original

return 0;
}