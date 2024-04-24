#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>
#include <list> // For collision handling using chaining

template <typename K, typename V> 
class HashTable {
public:
    HashTable(int capacity = 10); // Constructor with default capacity

    void insert(const K& key, const V& value);
    V* find(const K& key);
    void remove(const K& key);

private:
    // Implement your hash function
    // Storage for elements
  // initialize the vector with the capacity
};

#endif

