#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s){
    for(auto value : s ){
        cout << value <<endl;
    }   
}

int main(){
    unordered_set<string>s; // in sorted order
    s.insert("abc");
    s.insert("zsdf"); // O(1)
    s.insert("bcd");
    s.insert("bcd"); // only unique

    auto it = s.find("abcd");// returns iterator else .end 
    if(it!=s.end()){
        cout<<*it<<endl;
        // s.erase(it);
    }

    print(s);
}