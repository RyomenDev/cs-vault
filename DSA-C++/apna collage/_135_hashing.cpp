
//hashing --> play with elememt's indices

// two options - 1} traverse the whole array 2}elements and indices map

// hashing -- coverting elements into smaller elements using some functions (hash functions)

// colision -- 
/*
1}seperate chaining -- if collision , create chain of values at same key using linked list.  worst searching = O(n)
2}load factor -- n/b  n=no. of vales  to be mapped ; b=no. of keys available for mapping
3}open addressing -- if collision,do probing
        using a second argument called probe number in the hash function, it depends on key , hence given by P(k)
    a)Linear probing : p(k)=a*k+b
    b)quadratic probing : p(k)=a*k^2+b*k+c
    c)double hasing : P(k,x)=k*h2(x) , h2(x) is a secondary hash function
*/