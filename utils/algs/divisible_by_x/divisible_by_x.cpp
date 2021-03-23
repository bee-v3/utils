#include <iostream>

// Use the modulo operator to find if one number is divisible by another
// If the remainder is 0 then it is
int main(){
    int x = 5;
    int y = 10;
    int z = 100;
    int n = 49;
    std::cout << "Is " << y << " divisible by " << x << "?\n";
    (y % x == 0)? std::cout << "Yes" :  std::cout << "No"; std::cout << "!\n\n";
    
    std::cout << "Is " << z << " divisible by " << x << "?\n";
    (z % x == 0)? std::cout << "Yes" :  std::cout << "No"; std::cout  << "!\n\n";
    
    std::cout << "Is " << n << " divisible by " << x << "?\n";
    (n % x == 0)? std::cout << "Yes" :  std::cout << "No"; std::cout  << "!\n\n";
    return 0;
}