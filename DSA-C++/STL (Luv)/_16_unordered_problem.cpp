/*
given N strings and Q queries.
In each query you are given a sting, print yes if string is present else print no.
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s; // hash table
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin >> str;
        s.insert(str);
    }
    int q;
    cin>>q;
    while(q--){
        string str;
        cin>>str;
        auto it=s.find(str);
        if(it!=s.end()){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

}

/*
8
abc
def
abc
ghj
jkl
ghj
ghj
abc
3
abc 
ghj
afgh
*/