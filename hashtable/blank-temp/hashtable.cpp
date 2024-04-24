#include "HashTable.h"

template <typename K, typename V>
HashTable<K, V>::HashTable(int capacity) : _capacity(capacity) {
    // Initialize the table with empty lists
}

template <typename K>
int HashTable<K, V>::hashFunction(const K& key) const {
    // Assuming key is a string for this simple example
    // Start with a prime
    }
}

template <typename K, typename V>
void HashTable<K, V>::insert(const K& key, const V& value) {
    // Find if the key exists. If so, update the value
    // Otherwise, insert a new pair
}

template <typename K, typename V>
V* HashTable<K, V>::find(const K& key) {

}

// Create a function that removes a key from the hash table
template <typename K, typename V>
void HashTable<K, V>::remove(const K& key) {

}

