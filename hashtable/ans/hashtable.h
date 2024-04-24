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
    int hashFunction(const K& key) const; // Implement your hash function
    std::vector<std::list<std::pair<K, V>>> table; // Storage for elements
    int _capacity; 
};

#endif

