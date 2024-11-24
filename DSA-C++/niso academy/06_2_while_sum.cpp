#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");

int count=1,sum=0;
while(count<=10)
{
    sum +=count; //sum=sum+count
    count+=1;    //count=count+1
}
cout<<"sum of 1 to 10="<<sum<<endl;
cout<<"sum of 1 to 10="<<sum ;
getch();
return 0;
}