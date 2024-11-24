
/*
CHARECTER ARRAY::  need to know size before hand.
    larger size required for operations(concatenate or append).
    no terminating extra charecter.

STRINGS::no need to know size before hand.
    performing operations like concatenate and append is easier.
    terminated with special charecter '\0'.

*/

#include <iostream>
#include <string>

#include<algorithm> //to sort string  - line 79

using namespace std;

int main()
{
    /*
    
    string str = "hello ";
    // cin>>str;
    // cout<<str;

    string str1 = "grey";
    // string str1(5,'s');
    // cout<<str1<<endl;

    // for string with space
    // string str2;
    // getline(cin, str2);
    // cout << str2 << endl;

    // append
    // str.append(str1); //== str=str+str1
    // cout << str << endl;
    // cout << str.append(str1) << endl;
    // cout << str << endl;  // str changes

    cout << str + str1 << endl; // str do not change
    cout << str << endl;

    cout << str[1] << endl;

    str.clear();   // clear string
    cout << str << endl;

    */

    // comparison
    // string s1="abc";
    // string s2="xyz";
    // cout<<s2.compare(s1)<<endl;
    // cout<<s1.compare(s2)<<endl;
    // s1.clear();
    // int x=s1.empty();  //1
    // cout<<x;


    // string s3="nincompoop";
    // s3.erase(2,3);  // from , num of char
    // cout<<s3;
    // cout<<s3.find("com")<<endl;

    // s3.insert(2,"lol");
    // cout<<s3<<endl;
    // cout<<s3.size()<<endl; //or s3.length

    // cout<<s3.substr(3,3)<<endl;//from , how many

    // string s3="786";
    // int x=stoi(s3);
    // cout<<x+2<<endl;
    // cout<<to_string(x)+"2"<<endl;

    string s4 = "sadfwesfgdgg";
    sort(s4.begin(),s4.end());
    cout<<s4<<endl;

    return 0;
}
