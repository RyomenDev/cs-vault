#include <iostream>
#include <conio.h>
using namespace std; 


int main()
{
system("cls");

int count=1,sum=0,val;
//cout<<"enter the number till which the sum has t be calculated:\n";
cout<<"enter the number till which the sum has t0 be calculated:"<<endl;
cin>>val;
while(count<=val)
{
    sum +=count; //sum=sum+count
    count+=1;    //count=count+1
}
cout<<"sum of 1 to "<<val<<"="<<sum<<endl;
cout<<"sum of 1 to 10="<<sum ;
getch();
return 0;
}