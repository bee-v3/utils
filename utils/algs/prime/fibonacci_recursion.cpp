#include <iostream>
#include <unordered_map>

//cpp version of fibonacci sequence with O(n) complexity
unsigned long long int fib(int n){
    static std::unordered_map<unsigned long long int, unsigned long long int> a;
    
    if(n < 3)
        return 1;
    if(a.count(n))
        return a[n];
    a[n] = fib(n-1) + fib(n-2);
    return a[n];
}

int main() {
    unsigned long long int a;
    std::cout << "Enter Number\n";
    std::cin >> a;
    std::cout << fib(a);
}