
// array of charecters

#include<bits/stdc++.h>
using namespace std; 


int main()
{
char arr[100]="apple";
int i=0;
while(arr[i]!='\0'){
    cout<<arr[i]<<" ";
    i++;
}
cout<<endl;

// check palindrome
// largest word in sentence

// cin.ignore();
cin.getline(arr,100);
cin.ignore();
cout<<arr<<endl;
// cout<<arr[3]<<"  "<<arr[50]<<endl;

// cin>>arr;
// cout<<arr<<endl;

return 0;
}