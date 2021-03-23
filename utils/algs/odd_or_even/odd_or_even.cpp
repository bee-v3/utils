#include <iostream>

// Use the modulo operator to find if one number is odd or even
// If the remainder of the number mod 2 is 0 then it is
int main(){
    int x = 2;
    int y = 10;
    int z = 100;
    int n = 49;
    std::cout << "Is " << y << " odd or even?\n";
    (y % x == 0)? std::cout << "Even" :  std::cout << "Odd"; std::cout << "!\n\n";
    
    std::cout << "Is " << z << " odd or even?\n";
    (z % x == 0)? std::cout << "Even" :  std::cout << "Odd"; std::cout  << "!\n\n";
    
    std::cout << "Is " << n << " odd or even?\n";
    (n % x == 0)? std::cout << "Even" :  std::cout << "Odd"; std::cout  << "!\n\n";
    return 0;
}