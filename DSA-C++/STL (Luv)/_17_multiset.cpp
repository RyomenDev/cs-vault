#include<bits/stdc++.h>
using namespace std;

void print(multiset<string> &s){
    for(auto value : s ){
        cout << value <<endl;
    }   
}

int main(){
    multiset<string>s; // accept multiple values , sorted order
    s.insert("abc");
    s.insert("zsdf"); // O(logn)
    s.insert("bcd");
    s.insert("bcd"); // duplicate allowed

    auto it = s.find("bcd");// returns first iterator , if duplicate present else .end 
    if(it!=s.end()){
        cout<<*it<<endl;
        // s.erase(it); // del only it 1-(bcd)
    }
    s.erase("bcd"); // del all bcd
    print(s);
}