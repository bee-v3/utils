#pragma once
#ifndef UTILS_HASHTABLE_HASHNODE
#define UTILS_HASHTABLE_HASHNODE


template <typename A, typename B> 
class HashNode {
    private:
        A key;
        B value;
        HashNode *next;
    public:
        HashNode(const A &k, const B &v) : key(k), value(v), next(nullptr){}

        A getKey(){
            return key;
        }

        B getValue(){
            return value;
        }

        HashNode *getNext(){
            return next;
        }

        void setKey(const &k){
            key = k;
        }

        void setValue(const &v){
            value = v;
        }

        void setNext(HashNode *n){
            next = n;
        }
};

template <typename A, size_t tsize> 
struct keyGen {
    unsigned long operator()(const A &k) const
    {
        return (unsigned long)((unsigned long)k % tsize);
    }
};

#endif /* UTILS_HASHTABLE_HASHNODE */
