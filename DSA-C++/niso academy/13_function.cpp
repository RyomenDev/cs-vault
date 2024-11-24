#include <iostream>
#include <conio.h>
using namespace std; 
int another_function();
int another_function(int a){
    cout<<"  ::"<<endl;
    cout<<"sum is "<<a<<endl;
}
int main()
{
system("cls");
int sum=0;
for (int i = 1; i < 10; i++)
{
   sum+=i;
}
cout<<"the sum from 1 to 10 is "<<sum<<endl;

another_function(sum);

getch();
return 0;
}