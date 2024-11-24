#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s){
    for(string value : s ){
        cout << value <<endl;
    }
    // for (auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout<<*it<<endl;
    // }
    
}

int main(){
    set<string>s; // in sorted order
    s.insert("abc");
    s.insert("zsdf"); // O(logn)
    s.insert("bcd");
    s.insert("bcd"); // only unique

    auto it = s.find("abcd");// returns iterator else .end 
    if(it!=s.end()){
        cout<<*it<<endl;
        // s.erase(it);
    }

    print(s);
}