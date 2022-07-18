#include <iostream>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    int i=0,n;
    cin>>n;
    if(n%5!=0)
    cout<<"-1";
    else if(n%10==0)
    cout<<"0";
    else
    cout<<"1";
    cout<<endl;
}
	return 0;
}