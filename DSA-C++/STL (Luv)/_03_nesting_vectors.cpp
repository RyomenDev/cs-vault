#include<bits/stdc++.h>
using namespace std ;

void printVecPair(vector<pair<int,int>> v){
    cout<<"size="<<v.size()<<endl;
    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i].first<<","<<v[i].second<<"  ";
    }
    cout<<endl;
}

int main(){

// vector<pair<int,int>>v = {{1,2},{2,3},{3,4}};
// printVecPair(v);

vector<pair<int,int>>v1;
int n;
cin>>n;
for (auto i = 0; i < n; i++)
{
    int x,y;
    cin>>x>>y;
    v1.push_back({x,y}); //(make_pair(x,y))
}


printVecPair(v1);

}