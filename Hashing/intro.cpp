//playing with indices
//take extra memory and map values to indices of this memory

//hashing-> converting elements into smaller elements using some functions(hash function).

// collision-> after hashing we get two values on same key

//To solve collision
//1. Separate chaining -> create chain of values at same key using linked lists.
// Load factor: n/b
// no. of values to be mapped = n
// no. of keys available for mapping = b


//2.Open addressing
//probing -> using a second argument called probe number in hash function
//probe number depends on key, hence given by P(k)

//Linear probing -> P(k) = a*k + b
//Quadratic probing -> P(k) = a*k^2 + b*k + c
//Double Hashing -> P(k,x) = k*h2(x), h2(x)