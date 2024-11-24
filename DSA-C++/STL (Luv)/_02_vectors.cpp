
// vectors and array arec similar with changeable size -- dynamic array

#include<bits/stdc++.h>
using namespace std;

// void printVec(vector<int>v){  // v is copy , not reference
void printVec(vector<int>&v){  // v is not copy , reference by using &
    cout<<"size="<<v.size()<<endl; // v.size O(1)

    for (auto i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" "; //value access
    }
    v.push_back(2);
    cout<<endl;
    
}

int main(){
    // int a[10;]
    vector<int>v;  //vector integer type
    int n;
    cin>>n;
    for (auto i = 0; i < n; i++)
    {
        int x;
        cin>>x;
        // printVec(v); 
        v.push_back(x); //value pushed in the end of vector  O(1)
    }

    // printVec(v);

    //vector can also be genrated with given size
    vector<int> v1(5); // dynamic
    v1.push_back(5); // 6th element

    vector<int>v2(7,2); //2 2 2 2 2 2 2

    // printVec(v1);
    // printVec(v2);

    v2.pop_back(); // pops out last element O(1)

    vector<int>v3=v2; // copying v2 to v3 , not by reference O(n) 
    vector<int>&v_3=v2; // by reference O(n) 

    vector<int>v4;
    v4.push_back(7);
    v4.push_back(6);

    printVec(v4);
    printVec(v4);

    

}

