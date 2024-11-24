/*
Hashing is a technique that is used to uniquely identify a specific object from a group of similar objects.
Assume that you have an object and you want to assign a key to it to make searching easy. To store the key/value pair.
you can use a simple array like data structure where keys (integers) can be used directly as an index to store values.

In hashing--->
large keys are converted into small keys by using hash functions.
the values are then stored in a data structure called hash table.
the idea of hashing is to distribute entries(key/value pairs) uniformly across an array.

each element is assigned a key(converted key).
by using that key we can access the element in O(1) time.

using the key, the algorithm (hash function) computes an index that suggests where an entry can be found or inserted.

*/