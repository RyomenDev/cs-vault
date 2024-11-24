 // pair -- for mantaining relation between two things
 
 
 #include<bits/stdc++.h>
 using namespace std;

 int main(){

    pair<int,string> p;    // pair 1st value integer ,  second string ; pair name p
    p = make_pair(2,"abc"); 

    pair<int, string> p1 =p ; // copying p to p1 , not by reference

    cout<<p.first<<" "<<p.second << endl;

    cout<<p1.first<<" "<<p1.second << endl;

    pair<int, string> &p2 = p ;   // by reference

    p2.first=5;

    cout<<p.first<<" "<<p.second << endl;


    int a[]={1,2,3};
    int b[]={2,3,4};

    pair<int,int> p_array[3];
    // p_array[0]={1,2};
    // p_array[1]={2,3};
    // p_array[2]={3,4};
        for (auto i = 0; i < 3; i++)
    {
        p_array[i].first= i+1;
        p_array[i].second= i+2;
    }
    
    for (auto i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<"  "<<p_array[i].second<<endl;
    }
    
    cout<<"swapping"<<endl;

    swap(p_array[0],p_array[2]);
        
    for (auto i = 0; i < 3; i++)
    {
        cout<<p_array[i].first<<"  "<<p_array[i].second<<endl;
    }

 }