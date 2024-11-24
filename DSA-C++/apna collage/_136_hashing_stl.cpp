// for hashing in stl -- Maps and Unordered maps
/*
                maps                unordered maps
insertion       O(logn)             O(1)
access          O(logn)             O(1)
deletion        (logn)              O(n)
implement       red-black tree      hash table(array of buckets)

                map- key value pair
*/

#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<int,int>map_;
    map_[8]=2;  //key 8 ; value 2
    cout<<map_[8]<<endl;


return 0;
}