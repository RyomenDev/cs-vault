#include<bits/stdc++.h>
using namespace std;

void printVec(vector<int> v){
    cout<<"size="<<v.size()<<endl;
    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}

int main(){
 int N;
 cin>>N;
 vector<int> v[N]; // 10 vectors of size N
 for (auto i = 0; i < N; i++)
 {
 int n; 
 cin>>n;
 for (auto j = 0; j < n; j++)
 {
    int x;
    cin>>x;
    v[i].push_back(x);
 }
 
 }

 for (auto i = 0; i < N; i++)
 {
    printVec(v[i]);
 }

cout<<v[0][1]<<endl; //2
cout<<v[0][2]<<endl; //3

}