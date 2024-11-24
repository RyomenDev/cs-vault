/*
working of hash function::
1)maps a large key to a small key
2)generate values from 0 to m-1
3)fast process , O(1) for integers, and O(len) for string of length "len"
4)uniformly distibute large key into Hash Table slots

examples of hash funcion::
1) H(large_key)=large_key % m
    ideally, m=prime number (collision chance less)
    bad value 0f m->power of 2,10

2) for strings , weighted sum :: str[]="abcd"
    str[0]*x^0+str[1]*x^1+str[2]*x^2+str[3]*x^3 //ASCII

Universally Distributed the keys in table
*/

/*
Collision Handling ---->
let's suppose we have hash table of size 10.
we have to insert 10 phone numbers in hash table.
we choose a function , like last digit of phone number as INDEX.
then,collision is bound to happen.

if we don't know keys in advance then,we can use one of following:-
1)chaining
2)open addresing 
        a)linear probing
        b)quadratic probing
        c)Double Hashing
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{

    return 0;
}