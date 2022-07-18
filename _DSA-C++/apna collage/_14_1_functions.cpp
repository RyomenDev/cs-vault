// same as C

#include <iostream>
using namespace std; 

int add(){
    int a,b;
    cin>>a>>b;
    return a+b;
}
int main()
{
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);

 cout<<add()<<endl;;

return 0;
}

// concept of call stack
 /*with the call of function system assigns memory to it which stores its codes, local variables , parameters --> k/a stack frame.*/