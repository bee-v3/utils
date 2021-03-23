#pragma once
#ifndef HASHTABLE_HASHTABLE
#define HASHTABLE_HASHTABLE

#include <utility>
#include "hashnode.h"
 
template <typename A, typename B, size_t tsize = 11, typename C = keyGen<A, tsize>>
class HashTable {
    private:
        int size;
        int count;
        HashNode<A, B>** items[tsize];
    public:
        HashTable() : size(0), count(0){}
        HashTable(const std::pair<A,B> &p[]);
	    HashTable(const HashTable&);
        HashTable& operator=(const HashTable&);
        HashTable& operator=(std::pair<A,B> &p);
        HashTable& operator=(std::pair<A,B> &p[2]);
        HashTable& operator=(std::pair<A,B> &p[][2]);
        bool insert(const A &key, const B &value);
        bool insert(const std::pair<A,B> &p);
        bool insert(const std::pair<A,B> &p[2]);
        bool insert(const std::pair<A,B> &p[][2]);
        bool remove(const A &rmtarget);
        bool remove(const B &rmtarget);
        bool search(const A &starget);
        bool search(const B &starget);
};
#endif /* HASHTABLE_HASHTABLE */
