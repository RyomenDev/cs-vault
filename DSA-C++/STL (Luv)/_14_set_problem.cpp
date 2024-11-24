/*
given n strings , print unique strings in lexiogrphical order .
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    set<string>s;
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        string str;
        cin>>str;
        s.insert(str);
    }
    for(string value : s ){  // auto value:s
        cout << value <<endl;
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
*/