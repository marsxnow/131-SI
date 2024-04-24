#include "HashTable.h"

template <typename K, typename V>
HashTable<K, V>::HashTable(int capacity) : _capacity(capacity) {
    table.resize(capacity); // Initialize the table with empty lists
}

// A simple hash function example (you'll likely want something more robust)
template <typename K>
int HashTable<K, V>::hashFunction(const K& key) const {
    // Assuming key is a string for this simple example
    unsigned long hash = 5381; // Start with a prime
    for (char c : key) {
        hash = ((hash << 5) + hash) + c; 
    }
    return hash % _capacity; 
}

template <typename K, typename V>
void HashTable<K, V>::insert(const K& key, const V& value) {
    int index = hashFunction(key);
    // Find if the key exists. If so, update the value
    for (auto& item : table[index]) {
        if (item.first == key) {
            item.second = value;
            return;
        }
    }
    // Otherwise, insert a new pair
    table[index].push_back({key, value});
}

template <typename K, typename V>
V* HashTable<K, V>::find(const K& key) {
    int index = hashFunction(key);
    for (auto& item : table[index]) {
        if (item.first == key) {
            return &item.second; // Return a pointer to the value
        }
    }
    return nullptr; // Key not found
}

template <typename K, typename V>
void HashTable<K, V>::remove(const K& key) {
    int index = hashFunction(key);
    for (auto it = table[index].begin(); it != table[index].end(); ++it) {
        if (it->first == key) {
            table[index].erase(it);
            return;
        }
    }
}

